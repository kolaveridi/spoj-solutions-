#include <cstdio>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;
int main (){
pair<int,int>p[100000];
int n,t;
scanf("%d",&t);
while(t--){
 
scanf("%d",&n);
int s,f;// s and f are starting and finishing time respectively
for(int i=0;i<n;i++)
{
scanf("%d""%d",&s,&f);
 p[i]=make_pair(f,s); //we make pair with finishing time and starting time. sort compares the first element of pair with first element of second pair
}
sort(p,p+n);// sorting with finishing time
int e=-1;
int activity=0;// no of activities to be performed
for (int i=0;i<n;i++){
if(p[i].second>=e)
{
activity++;
e=p[i].first;
}
}
printf("%d\n",activity);
}
return 0;
}
 