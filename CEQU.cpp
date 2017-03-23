#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main() {
   int t;
   scanf("%d",&t);
   int val=1;
   while(t--){
   	
   	ll a,b,c;
   	scanf("%lld%lld%lld",&a,&b,&c);
   	ll d=__gcd(a,b);
   	if(c%d==0)
   	printf("Case %d: Yes\n",val);
   	else
   		printf("Case %d: No\n",val);
   		val++;
   }
    return 0;
}
 