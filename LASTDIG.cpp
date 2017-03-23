#include <iostream>
#include <cstdio>
using namespace std;
#define ll long long
ll modularexpo( ll base,ll expo,int mod){
ll res=1;
while(expo>0){
    if(expo%2==1)
        res=(res*base)%mod;
    expo=expo/2;
    base=(base*base)%mod;
 
 
 
}
return res;
}
 
 
 
 
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
ll sol;
        ll a;
        ll b;
        int t=10;
        scanf("%lld %lld",&a,&b);
       sol= modularexpo(a,b,t);
printf("%lld\n",sol);
 
    }
 
    return 0;
}
 