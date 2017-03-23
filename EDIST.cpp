#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <vector>
#include <math.h>
#include <string>
using namespace std;
// a function to calculate minimum distance using dp
int minimumdist(string a,string b)
{
 
    int l=a.length();
    int m=b.length();
    // nested vector to store m+1 zeros and then l+1 such l's
    vector<int> vec (m+1,0);
    vector<vector<int> >dp(l+1,vec);
     for( int i=0;i<=l;i++)
     {
         for (int j=0;j<=m;j++)
         {
 
             if(i==0)// if second string is null
                dp[i][j]=j;
             else if(j==0)// if first string is null
                dp[i][j]=i;
             else{  //if last character matches
                    if(a[i-1]==b[j-1])
                    dp[i][j]=dp[i-1][j-1];
                    else
                        dp[i][j]=min(min(dp[i-1][j-1],dp[i][j-1]),dp[i-1][j])+1;
 
 
 
             }
         }
 
     }
 
    return dp[l][m];
 
}
int main()
{
    int t;
    cin>>t;
    while(t--){
 
 
    string s,u;
    cin>>s;
    cin>>u;
    int ans=minimumdist(s,u);
    cout<<ans<<endl;
    }
    return 0;
}
 