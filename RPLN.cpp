#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int a[100005];
int  tree[1000005*4];
int minf(int x,int y){
if (x>y)
    return y;
else
    return x;
 
}
void build (int node , int start,int endn){
 if(start==endn){
    tree[node]=a[start];
    return;
 }
 else{
        int mid=(start+endn)/2;
    // recurse on left child
    build(2*node+1,start,mid);
    build(2*node+2,mid+1,endn);
    tree[node]=minf(tree[2*node+1],tree[2*node+2]);// internal node stores the minimum of the two nodes
 }
 
 
}
int query(int node,int start,int endn,int l,int r){
    if(r < start || endn  < l)
    {// range represented by a node is completely outside the given range
        return INT_MAX;// careful part don't return zero
    }
if(l<=start && endn<=r){
    return tree[node];
}
int mid=(start+endn)/2;
int p1=query(2*node+1,start,mid,l,r);
int p2=query(2*node+2,mid+1,endn,l,r);
 
return minf(p1,p2);
 
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
            printf("Scenario #%d:\n",i);
            int  n,q;
            scanf("%d%d",&n,&q);
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            build(0,0,n-1);
        for(int i=0;i<q;i++){
            int l,r;
            scanf("%d%d",&l,&r);
      int ans=query(0,0,n-1,l-1,r-1);
      cout<<ans<<endl;
        }
 
 
    }
 
    return 0;
}