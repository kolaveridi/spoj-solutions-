#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <map>
#include <cstring>
using namespace std;int const MAX = 1010;
 
bool visited[MAX];
int weight[MAX];
int sorted[MAX];
int position[MAX];
 
int main(int argc, char **argv) {
    for (int n, c = 1; scanf("%d", &n) && n; c++) {
        memset(visited, false, sizeof(visited));
        for (int i = 0; i < n; i++) {
            cin >> weight[i];
            sorted[i] = weight[i];
        }
        sort(sorted, sorted + n);
        int min_global = sorted[0];
        for (int i = 0; i < n; i++)
            position[sorted[i]] = i;
        int res = 0;
        for (int i = 0; i < n; i++)
            if (!visited[i]) {
                int next = i;
                int min_local = 1 << 30;
                int sum = 0;
                int cycle_len = 0;
                for (; !visited[next]; cycle_len++) {
                    visited[next] = true;
                    if (weight[next] < min_local)
                        min_local = weight[next];
                    sum += weight[next];
                    next = position[weight[next]];
                }
                int no_borrow = (min_local * (cycle_len - 2)) + sum;
                int borrow = (min_global * (cycle_len + 1)) + min_local + sum;
                res += min(no_borrow, borrow);
            }
        printf("Case %d: %d\n\n", c, res);
    }
    return 0;
}