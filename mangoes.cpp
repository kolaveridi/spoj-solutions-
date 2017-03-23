#include <iostream>
#include <cstdio>
 
using namespace std;
 
int main()
{
    long long  int n;
    long long int s;
 
    int t;
    scanf("%d",&t);
    while(t--)
    {
 
    scanf("%lld",&n);
  long long int mod=n;
    if(n%2==0)
        n=(n-2)/2;
    else
        n=(n-1)/2;
        s=(n*n)%mod;
    printf("%lld\n",s);
    }
    return 0;
}
 