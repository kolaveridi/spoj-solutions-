#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
 
long long int dp[100][10];// 0 1 2 3 4 5 6 7 8 9 so we made it dp[][10]
void nondecresaingdigits()
{
    for(int i=0;i<10;i++){
 
 
        dp[0][i]=1;// marked upper row to be 1
    }
 
   for(int i=1;i<=100;i++){
    for(int j=0;j<10;j++){
        for(int k=0;k<=j;k++){
            dp[i][j]=dp[i][j]+dp[i-1][k];
        }
    }
   }
 
 
}
 
 
 
 
 
int main()
{
    nondecresaingdigits();
    int t;
    cin>>t;
    while(t--){
        int i,n;
        cin>>i>>n;
        cout<<i<<" "<<dp[n][9]<<endl;
 
 
 
    }
 
 
 
    return 0;
}