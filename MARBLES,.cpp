#include <iostream>
#include <cstdio>
using namespace std;
 
long long combination(int n,int m)//n-1 and k-1 as m and n
{
    if(m>n-m)
    m=n-m;// n-1-(k-1)=n-k
    long long res=1;
    for(int i=0;i<m;i++){
            // n-1*n-2*..........k/(n-k)!because (n-1)!/(k-1)!*(n-k)!
 
        res=res*(n-i)/(i+1);
    }
        return res;
 
 
 
}
 
 
 
 
int main()
{
    int t;// test cases
    scanf("%d",&t);
    while(t--){
    int n,k;
    scanf("%d %d",&n,&k);
    printf("%lld\n",combination(n-1,k-1));
 
 
 
    }
 
    return 0;
}
 