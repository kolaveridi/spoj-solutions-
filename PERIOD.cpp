#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
 
using namespace std;
#define M 1000001
char a[M];
int lps[M];
 
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int l;
        scanf("%d %s",&l,a);
        lps[0]=0;
        int k=0;
        printf("Test case #%d\n",i);
        for(int i=1;i<=l;i++)
        {
           while(k>0 && a[i]!=a[k])
                k=lps[k-1];
           if(a[i]==a[k])
            k++;
           lps[i]=k;
           if( k>0 &&(i+1)%(i+1-k)==0)
           printf("%d %d \n",i+1,(i+1)/(i+1-k));
 
 
        }
        puts("");
 
 
 
 
 
 
 
 
 
    }
 
    return 0;
}
 