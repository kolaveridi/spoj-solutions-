#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
       int h,p,a;
       scanf("%d%d%d",&h,&p,&a) ;
       if(h<=p)// only one step possible
       {
           printf("1\n");
           continue;
       }
       // find the value of n first
       ll val2=0;
       ll ans=0;
       double x=(p-2*a);
       double y=(a-h);
       double val=sqrt(x*x-8*y*p);
         val2=ceil((val-x)/(2*p));
        ans=val2+val2-1;// relation between x and y on observation 
       printf("%lld\n",ans);
 
 
 
 
 
    }
 
    return 0;
} 