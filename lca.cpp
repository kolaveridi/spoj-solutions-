#include <bits/stdc++.h>
using namespace std;
int parent[1234];
bool visited[1234];
int root_node;
int LCA(int u,int v){
	memset(visited,false,sizeof(visited));
	int lca;// this will store our answer
	while(true){
		visited[u]=true;// mark node visited
		if(u==root_node){
			break;
		}
		u=parent[u];
	}
while(true){
	if(visited[v]==true){
		lca=v;
		break;
	}
	v=parent[v];
}
return lca;
	
}
int main(){
	int t;
	scanf("%d",&t);
	int val=1;
	while(t--){
	
	
		int n;
		scanf("%d",&n);
		memset(parent,-1,sizeof(parent));
		for(int i=1;i<=n;i++){
			int x;
			scanf("%d",&x);
			while(x--){// x datas 
			int node;
			   scanf("%d",&node);
			   	parent[node]=i;
			}
		}
		for(int i=1;i<=n;i++){
			if(parent[i]==-1)
			{root_node=i;
			break;
		}
	}
		int q;
		scanf("%d",&q);
			printf("Case %d:\n",val);
		for(int i=1;i<=q;i++){
			int u,v;
			scanf("%d%d",&u,&v);
			int ans=LCA(u,v);
			printf("%d\n",ans);
		}
	
		val++;
	}
} 