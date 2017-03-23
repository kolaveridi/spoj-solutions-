#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ll sum=0;
		for(int i=0;i<n;i++){
			int x;
			scanf("%d",&x);
			sum+=x;
		}
		if(sum%n==0){
			cout<<n<<endl;
		}
		else{
			cout<<n-1<<endl;
		}
	}
} 