#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <cstring>
using namespace std;
 
int main()
{
    int m,n;
    int u,v;
    scanf("%d %d",&m,&n);
    int k=m+1;
    int arr[k];
    memset(arr,0,sizeof arr);// all zero
    for(int i=1;i<=n;i++){
      scanf("%d %d",&u,&v);
      arr[u]+=1;
      arr[v+1]+=-1;
    }
    for(int i=1;i<=m;i++)
        arr[i]+=arr[i-1];
    sort(arr,arr+k);
    int z=(m/2)+1;
   printf("%d",arr[z]);
    return 0;
}
 