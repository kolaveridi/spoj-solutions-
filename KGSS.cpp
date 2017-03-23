#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int a[100005];
struct node {// each seg tree node will store largest and second largest value in the range
int first;
int second ;
};
 
node tree[100005*3];
void build(int no,int start,int endn){
if(start==endn){
    tree[no].first=a[start];
    tree[no].second=INT_MIN;
}
else{
    int mid=(start+endn)/2;
    build(2*no+1,start,mid);
    build(2*no+2,mid+1,endn);
    tree[no].first=max(tree[2*no+1].first,tree[2*no+2].first);
    tree[no].second=min(max(tree[2*no+1].first,tree[2*no+2].second),max(tree[2*no+1].second,tree[2*no+2].first));
}
}
node  query(int no,int start,int endn ,int l,int r){
           node result;
           result.first=result.second=-1;
          if(r < start || endn < l)
            return result;// we return a node in this function not just -1
          if(l <= start &&  endn <= r){
            return tree[no];// tree is node
          }
          int mid=(start+endn)/2;
 
          node left=query(2*no+1,start,mid,l,r);
          node right=query(2*no+2,mid+1,endn,l,r);
          result.first=max(left.first,right.first);
          result.second=min(max(left.first,right.second),max(left.second,right.first));
           return result;
}
   void update(int no,int start,int endn,int idx,int val){
   if(start==endn){// update the current node
    tree[no].first=val;
    tree[no].second=INT_MIN;
 
   }
   else{
        int mid=(start+endn)/2;
        if( idx<=mid)
            update(2*no+1,start,mid,idx,val);
        else
            update(2*no+2,mid+1,endn,idx,val);
 
       tree[no].first=max(tree[2*no+1].first,tree[2*no+2].first) ;
       tree[no].second=min(max(tree[2*no+1].first,tree[2*no+2].second),max(tree[2*no+1].second,tree[2*no+2].first));
   }
}
 
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    build(0,0,n-1);
    // take queries
    int q;
    cin>>q;
 
    for(int i=0;i<q;i++){
            char c;
            int l,r;
        cin>>c>>l>>r;
        if(c=='Q')// QUERY PART
        {
            node ans=query(0,0,n-1,l-1,r-1);
            cout<<ans.first+ans.second<<endl;
        }
        else{
            update (0,0,n-1,l-1,r);
        }
 
    }
 
 
    return 0;
} 