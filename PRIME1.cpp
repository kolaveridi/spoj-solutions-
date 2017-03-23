#include<cstdlib>
#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
#include<cstring>
#include <algorithm>
#include <map>
using namespace std;
#define SZ 32000
 
bool sieve[SZ];
 
int main(int argc, char** argv) {
int m, n, t;
sieve[0] = sieve[1] = 1;
for (int i = 2; i < SZ; i++) {
if (!sieve[i]) {
for (int j = 2; i * j < SZ; j++) {
sieve[i * j] = 1;
}
}
}
 
 
cin >> t;
while (t--) {
cin >> m >> n;
 
 
for (int i = m; i <= n; i++) {
 
 
bool pass = (i!=1);
 
int k;
for (int j = 2; k=(j * j) <= i; j++) {
 
 
if (!sieve[j]) {
if (i % j == 0) {
       pass=0;
break;
}
}
 
}
if (pass)
cout << i << endl;
 
 
}
cout << endl;
 
}
return 0;#include <bits/stdc++.h>
using namespace std;
#define sz 10005
vector <int> adj[sz];
int diameter=0;
int f[sz];int g[sz];
void dfs(int u,int p){
   vector <int> fvalues;
   for(int i=0;i<adj[u].size();i++){
    int v=adj[u][i];// v is adjacent of u
    if(v==p)
        continue;
    dfs(v,u);
    fvalues.push_back(f[v]);// f(v1),,,,,,f(vn) for all children of u
   }
   sort(fvalues.begin(),fvalues.end());
   f[u]=1;
   if(!fvalues.empty())
     f[u]+=fvalues.back();// f(u)=1+max(f(children1),(children2)....)
  if(fvalues.size()>=2)
    g[u]=1+fvalues.back()+fvalues[fvalues.size()-2];
 
  diameter=max(diameter,max(f[u],g[u]));
 
 
}
 
 
int main(){
    memset(f,0,sizeof(f));
    memset(g,0,sizeof(g));
int n;
scanf("%d",&n);// number of nodes
for(int i=1;i<=n-1;i++){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
dfs(1,0);
 
cout<<diameter-1 <<endl;
}