#include <iostream>
#include <cstdio>
#include <math.h>
 
using namespace std;
 
long long gcd(long long a,long long b){
if(a==0)
    return b;
else
    return gcd(b%a,a);
 
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
         scanf("%lld",&n);
         long long range=n/2;
         for(;;)
         {
             if(gcd(n,range)==1){
                printf("%lld\n",range);
             break;
             }
             range--;
 
         }
 
 
 
 
    }
 
 
    return 0;
}
 