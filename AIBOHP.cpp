#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <map>
#define REP(i,a,b) for (int i=int(a);i<=int(b);i++)
using namespace std;
char s1[6101];// for string as input
char s2[6101]; // for string as reverse
int t; // test cases
long long lcs[6101][6101];
int main()
{
    scanf("%d",&t);
    while (t--)
    {
        scanf("%s",s1);
        int len=strlen(s1);
        // we use strcpy to copy the string and then reverse it
        strcpy(s2,s1);
        reverse(s2,s2+len);
        // used geeksforgeeks code to calculate lcs
        REP(i,0,len)
        REP(j,0,len)
            if(i==0||j==0)
                lcs[i][j]=0;
            else if (s1[i-1]==s2[j-1])
                lcs[i][j]=1+lcs[i-1][j-1];
            else
                lcs[i][j]=max(lcs[i][j-1],lcs[i-1][j]);// defined algorithm so no need to write max function
 
 
        printf("%d\n",len-lcs[len][len]);
    }
return 0;
}
 
 
 
 
 
 