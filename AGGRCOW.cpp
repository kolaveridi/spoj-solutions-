#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
 
using namespace std;
int searchdistance(long long int *pos,long long int stalls,long long int distance,long long int cows)
{
   long long int cowno=1;
  long long  int lastpostionval=pos[0];
    for(int i=1;i<stalls;i++)
    {
    if(pos[i]-lastpostionval>=distance){
        cowno++;
        if(cowno==cows)
        {
         return 1;
        }
        lastpostionval=pos[i];
    }
    }
    return 0;
 
}
 
int main()
{
 long long int t;
 scanf("%lld",&t);
while(t--){
    long long int m;
    long long int n;
    scanf("%lld %lld",&m,&n);
   long long int pos[m];
    for(int i=0;i<m;i++)
        scanf("%lld",&pos[i]);
    sort(pos,pos+m);
    // we sorted the positions and now distance to maximize
  long long  int start=0;
   long long int end=pos[m-1]-pos[0];// 9-1=8 here
    while(start+1<end){
      long long int mid=(start+end)/2;
        if(searchdistance(pos,m,mid,n))// array ,stalls,middle distance,cows
       {
           start=mid;
       }
       else{
        end=mid;
       }
 
    }
printf("%lld\n",start);
}
    return 0;
}
 