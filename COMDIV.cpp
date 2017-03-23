#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int gcd(int a,int b);
bool sieve[1000];
    vector<int> primesare;
void eratosthenes()
{
    memset(sieve,true,sizeof(sieve));
    sieve[0]=sieve[1]=false;
    for(int i=2;i<=1000;i++)
    {
 
        if (sieve[i])// true
          primesare.push_back(i);
        for(int j=2;j*i<1000;j++)
            sieve[i*j]=false;
    }
}
 
int gcd(int a,int b)
 
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
    }
 
 
 
 
    int main()
    {
        eratosthenes();
 
 
 
        int t;
        scanf("%d",&t);
 
        while(t--){
        int a,b;
    scanf("%d %d",&a,&b);
  int  gc=gcd(a,b);
    int ans=1;
    for(int i=0;i<primesare.size();i++){
        if(primesare[i]>gc)
            break;
        if(gc%primesare[i]==0)
        {
            int c=0;
            while(gc%primesare[i]==0){
                c++;
                gc/=primesare[i];
            }
            ans*=(c+1);
        }
 
    }
    if(gc>1)
        ans<<=1;
    printf("%d\n",ans);
 
 
    }
    return 0;
    } 