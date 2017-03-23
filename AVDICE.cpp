#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		double sum=0;
		for(int i=1;i<=n;i++ ){
			sum+=1/(double)i;//harmonic 
		}
		double ans=sum*n;
		cout<<fixed<<setprecision(2)<<ans<<endl;
		
	}
	
} 