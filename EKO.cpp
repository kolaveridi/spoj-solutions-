#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll n,m;
ll a[1000005];
 
ll fun(ll height){
	ll remain=0LL;
	for(ll i=1;i<=n;i++){
		if(height<=a[i]){
			remain+=a[i]-height;
		}
	}
	return remain;
}
int main(){
	
	scanf("%lld%lld",&n,&m);
	ll maxh=-1;
	for(ll i=1;i<=n;i++){
	  scanf("%lld",&a[i]);
	  maxh=max(a[i],maxh);
	  }
	  
	  //cout<<"maxh is "<<maxh<<endl;
	  ll low=0;ll high=maxh;ll ans=0;
	  	  while(low<=high){
	  	ll mid=(low+high)/2;
	  //	cout<<"fun(mid) is "<<fun(mid)<<endl;
	  	if(fun(mid)>=m){
	  		ans=mid;
	  		low=mid+1;
	  		//cout<<"ans is "<<ans<<endl;
	  		//	break;
		  }
		   if(fun(mid)<m){
		  	high=mid-1;// opposite 
		  }
		  
	  	
	  }
	  printf("%lld\n",ans);
	  
} 