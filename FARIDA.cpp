#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <map>
#include <math.h>
using namespace std;
long long dp[10001][2];
int main()
{
    // test cases
int t;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
    dp[0][0]=dp[0][1]=0;// 0 0
    int n;
 
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int number;
        scanf("%d",&number);
        dp[i+1][0]=max(dp[i][0],dp[i][1]);
        dp[i+1][1]=number+dp[i][0];
 
 
    }
 
 printf("Case %d: %lld\n", i, max(dp[n][0], dp[n][1]));
 
}
    return 0;
}
 