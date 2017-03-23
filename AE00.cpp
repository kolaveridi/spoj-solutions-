#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll x){
		ll res=1;
		
		for(ll i=2;i*i<=x;i++){
			if(x%i==0)
			res++;
		}
		return res;
	}
int main(){
	ll ans=0;
	ll n;
	scanf("%lld",&n);
	for(ll i=1;i<=n;i++){
	
	   ll ret=fun(i);
	  // cout<<" i is "<<i<<endl;
	   //cout<<"ret is "<<ret<<endl;
	   ans+=ret;
	}
	cout<<ans<<endl;
	
	
} 