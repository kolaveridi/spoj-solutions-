#include <bits/stdc++.h>
using namespace std;
int g[205][205];
int rg[205][205];
#define inf 1000
int parent[205];
bool visited[205];
	int n;
bool  bfs(int s,int t){
memset(visited,false,sizeof(visited));
	queue <int> q;
	q.push(s);
	visited[s]=true;
	parent[s]=-1;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(int node =1;node<=t;node++){
			if(rg[u][node]>0 && visited[node]==false){
				visited[node]=true;
				parent[node]=u;
				q.push(node);
			}
		}
		
	}
	if(visited[t]==true )
	return true;
	else
	return false;
}
int fordfulkerson(int s,int t){
	parent[s]=-1;
	int max_flow=0;//ans 
	while(bfs(s,t)){
		int pathflow=INT_MAX;
		for(int u=t;u!=s;u=parent[u]){
			//cout<<"u is "<<u<<endl;
			int v=parent[u];// edge is from v to u 
			pathflow=min(pathflow,rg[v][u]);	
		}
	//	cout<<"pathflow for above is "<<pathflow<<endl;
		
		for(int u=t;u!=s;u=parent[u]){
			int v=parent[u];// edge is from v to u 
			rg[v][u]-=pathflow;
			rg[u][v]+=pathflow;
	}
		max_flow+=pathflow;
	}
	return max_flow;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(parent,0,sizeof(parent));
		memset(g,0,sizeof(g));memset(rg,0,sizeof(rg));
	scanf("%d",&n);
		for(int i=1;i<=n-1;i++){
			int x;
			scanf("%d",&x);
			for(int j=1;j<=x;j++){
				int val;
				scanf("%d",&val);
				if(i==1 || val==n)
				g[i][val]=1,rg[i][val]=1;
				else
				g[i][val]=inf,rg[i][val]=inf;
				rg[val][i]=0;
			}
		}
		/*for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cout<<rg[i][j]<<" ";
			}
			cout<<endl;
		}*/
		int ans=0;
		 ans=fordfulkerson(1,n);
		cout<<ans<<endl;
	}
} 