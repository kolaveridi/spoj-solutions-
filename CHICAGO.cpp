#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
typedef long long ll;
double dist[105][105];
int main()
{
        int n;
       // scanf("%lld%lld",&n,&edges);//5 ,7
      while(scanf("%d", &n)==1 && n){
            int edges;
      cin>>edges;
       memset(dist,0,sizeof(dist));
        for(int i=1;i<=edges;i++){
            int u,v;
            double p;
            //scanf("%lld%lld%lf",&u,&v,&p);
            cin>>u>>v>>p;
            dist[u][v]=p/100.0;// 70/100 ,80/100
            dist[v][u]=p/100.0;
        }
        for(int k=1;k<=n;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                        if(j!=i && k!=i  && j!=k)
                    dist[i][j]=max(dist[i][j],dist[i][k]*dist[k][j]);// multiplicative rule of probability and events are independent
                }
            }
        }
        cout<<fixed<<setprecision(6)<<(dist[1][n]*100.0)<<" percent"<<endl;
 
    }
 
    return 0;
} 