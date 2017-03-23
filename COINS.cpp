#include <iostream>
#include <algorithm>
#include <cstdio>
#include <math.h>
#define max(x,y) (x>y?x:y)
using namespace std;
 static long long  dp[1000000];
long long fun(long long n)
{
 
long long m;
    if(n>=1000000)
      return max(n,fun(n/2)+fun(n/3)+fun(n/4));
    if(dp[n]!=0)
        return dp[n];
 
    if(n<12)//4,6 and all below 12 it is same as coin value
    m=n;
    else
        m= max(n,fun(n/2)+fun(n/3)+fun(n/4));
    dp[n]=m;
    return m;
}
 
 
 
 
int main()
{
    for (int i=0;i<1000000;i++)
        dp[i]=0;
    int count =0;
    int n;
    while(!cin.eof())
    {
        cin>>n;
        count++;
       cout<<fun(n)<<endl;
        if (count==10)
            break;
    }
 
 
    return 0;
} 