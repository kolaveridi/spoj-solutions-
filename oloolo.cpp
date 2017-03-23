#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int xorval=0;
	for(int i=0;i<n;i++){
		int x;
		scanf("%d",&x);
		xorval=xorval^x;
	}
	printf("%d\n",xorval);
} 