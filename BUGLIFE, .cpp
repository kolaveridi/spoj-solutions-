#include <bits/stdc++.h>
using namespace std;
vector <int> adj[2005];
vector <int> side(2005);
bool isbipartite=true;
// a function to check bipartite
void checkbipartite(int u) {
 for(int i=0;i<adj[u].size();i++){
    int v=adj[u][i];// neighbour of u
    if(side[v]==-1){
        side[v]=1-side[u];
        checkbipartite(v);
    }
    else if(side[v]==side[u]){
        isbipartite=false;
    }
 }
}
int co=0;
int main(){
int t;
scanf("%d",&t);
while(t--){
        co=co+1;
        // clear the vector and side
        for(int i=1;i<=2002;i++){
        side[i]=-1;
        adj[i].clear();
        }
    isbipartite=true;
    int n,m;// number of nodes and m edges
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);// undirected graph case
        adj[v].push_back(u);
 
    }
    for(int u=1;u<=n;u++){
        if(side[u]==-1){
            side[u]=0;
            checkbipartite(u);
        }
    }
    cout<<"Scenario #"<<co<<":"<<endl;
    if(isbipartite==true)
        printf("No suspicious bugs found!\n");
    else
        printf("Suspicious bugs found!\n");
 
 
 
 
}
 
 
 
 
}