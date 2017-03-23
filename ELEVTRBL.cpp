#include <iostream>
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int visited[1000005];
ll dist[1000005];
int main()
{
    memset(visited,0,sizeof(visited));
    ll floors,start,goal,up,down;// floors,start,goal,up,down
    scanf("%lld%lld%lld%lld%lld",&floors,&start,&goal,&up,&down);
    dist[goal]=-1;
    queue <ll> q;
    q.push(start);
    dist[start]=0;
    visited[start]=1;
    while(!q.empty()){
        ll r=q.front();
        q.pop();
        ll nf1=r+up;
        ll nf2=r-down;
        if(nf1<=floors && nf1>=1 && visited[nf1]==0 ){
            visited[nf1]=1;
            q.push(nf1);
            dist[nf1]=dist[r]+1;
        }
        if(nf2>=1 && nf2<=floors && visited[nf2]==0){
            visited[nf2]=1;
            q.push(nf2);
            dist[nf2]=dist[r]+1;
        }
    }
    if(dist[goal]!=-1)
    printf("%lld\n",dist[goal]);
    else
        printf("use the stairs\n");
    return 0;
}