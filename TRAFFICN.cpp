#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf (1LL<<61)
typedef pair <ll,ll > pr;
 
vector <pr> adj1[123456];vector <pr> adj2[123456];
ll dist[100005];
ll dist1[100005];ll dist2[100005];
void dijkistra(int s,vector <pr> adj[]){
    priority_queue <pr> pq;//weight, vertices
   fill(dist,dist+100005,inf);
   dist[s]=0;
   pq.push(make_pair(0,s));// dist and vertex
   while(!pq.empty()){
     ll  w1=-pq.top().first;// weight
     ll u=pq.top().second;// vertex
     pq.pop();
   for(ll i=0;i<adj[u].size();i++){
    ll  v=adj[u][i].first;// neighbor of u is v
    ll w2=adj[u][i].second;//// u is connected to v with this weight
   ll weight=w2+w1;
    if(weight<dist[v]){
        dist[v]=weight;
        pq.push(make_pair(-weight,v));
    }
   }
}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		for(int i=0;i<=100004;i++) {
	adj1[i].clear();adj2[i].clear();dist1[i]=0;dist2[i]=0;
		}
		ll n,m,k,s,t;
		scanf("%lld%lld%lld%lld%lld",&n,&m,&k,&s,&t);
		for(int i=1;i<=m;i++){
			ll u,v,w;
		scanf("%lld%lld%lld",&u,&v,&w);
		adj1[u].push_back(make_pair(v,w));
		adj2[v].push_back(make_pair(u,w));// reverse edge with weight 1
		}
		dijkistra(s, adj1);
		for(int i=1;i<=n;i++){
			dist1[i]=dist[i];
			//cout<<"dist1[ "<<i<<" ]"<<dist1[i]<<endl;
		}
		dijkistra(t, adj2);
		for(int i=1;i<=n;i++){
			dist2[i]=dist[i];
				//cout<<"dist2[ "<<i<<" ]"<<dist2[i]<<endl;
		}
 
		ll res=dist1[t];
		for(int i=1;i<=k;i++){
			ll u,v,w;
			scanf("%lld%lld%lld",&u,&v,&w);
			res=min(res,min(dist1[u]+w+dist2[v],dist1[v]+w+dist2[u]));
		}
		if(res==inf)
		printf("-1\n");
		else
		printf("%lld\n",res);
		
	}
} 