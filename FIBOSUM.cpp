#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;
const int bignum=1000000007;
typedef long long matrix[2][2];
typedef long long vec[2];
void multiply(matrix a, matrix b, matrix&res){
    memset(res,0,sizeof res);
for(int i=0;i<2;i++)
{
    for(int j=0;j<2;j++)
    {
        for(int k=0;k<2;k++){
            res[i][j]+=a[i][k]*b[k][j];
        }
        res[i][j]%=bignum;
    }
 
 
}
 
}
void powerfunction(matrix m,int p,matrix &res){
matrix t;
memcpy(t,m,sizeof t);
res[0][1]=res[1][0]=0;
res[0][0]=res[1][1]=1;
while(p){
    if(p&1){
        matrix temp;
        multiply(t,res,temp);
        memcpy(res,temp,sizeof res);
 
 
    }
    p>>=1;
    matrix temp;;
 
    memcpy(temp,t,sizeof temp);
    multiply(temp,temp,t);
}
}
void finallyresultpart(matrix m,vec v, vec&res){
memset(res,0,sizeof res);
for(int i=0;i<2;i++){
    for(int j=0; j<2;j++){
        res[i]+=m[i][j]*v[j];
    }
    res[i]%=bignum;
}
 
}
 
long long getfibonacci(int raise){
vec v;
v[0]=0;
v[1]=1;
 matrix fib;
fib[1][1]=fib[0][1]=fib[1][0]=1;
fib[0][0]=0;
matrix p;
powerfunction(fib,raise, p);
vec res;
finallyresultpart(p,v,res);
return res[0];
 
}
 
 
 
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
     int m;
     cin>>n>>m;
     cout<<(getfibonacci(m+2)-getfibonacci(n+1)+bignum)%bignum<<endl;
 
  }
    return 0;
}
 
