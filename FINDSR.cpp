#include <iostream>
#include <algorithm>
#include <cstdio>
#include <vector>
#include <math.h>
#include <cstring>
using namespace std;
#define m 100001
char pat[m];
int lps[m];
//using build failure function
void longestprefixsuffix( int n)
{
 
 
lps[0]=0;
     int k=0;
     for (int i=1;i<n;i++)
 
      {
 
       while(k>0 && pat[i]!=pat[k])
            k=lps[k-1];
       if(pat[k]==pat[i])
            k++;
        lps[i]=k;
 
}
}
int main()
{
   while (true)
    {
 
cin>>pat;
 
        if (pat[0]=='*')// the last case in input
            break;
            int L=strlen(pat);
            int solution=1;// if input is  aaaaaab
            longestprefixsuffix(L);
            int s=L-lps[L-1];
            if(s<L && L%s==0)
                solution=L/s;
            printf("%d\n",solution);
 
 
 
 
 
 
        }
 
        return 0;
 
 
    }
 
