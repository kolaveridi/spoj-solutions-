#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	ll t;
	scanf("%lld",&t);
	ll val=1;
	while(t--){
		
		ll x;
		char k=':';
			
		scanf("%lld",&x);
		if(x%2!=0){
			
		 // cout<<"Case "<<val<<":"<<x<<endl;
		 printf("Case %lld%c %lld\n",val,k,x);
		}
		else{
			while(x%2==0){
				x=x/2;
			}
			// cout<<"Case "<<val<<":"<<x<<endl;
			  printf("Case %lld%c %lld\n",val,k,x);
		}
		val++;
	}
	return 0;
}  