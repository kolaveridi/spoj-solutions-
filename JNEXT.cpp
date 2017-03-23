#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		
	vector <int> v;
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		bool ans=next_permutation(v.begin(),v.end());
		if(ans==false){
		cout<<-1<<endl;
		continue;
	}
	for(int i=0;i<n;i++){
		cout<<v[i];
	}
	cout<<endl;
	}
} 