#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;
// copied the code for another approach
vector <int> kmp(int m);
char *pattern;
int *lps;
void longestprefixsuffix(int m)
{
    int len=0;
int i=1;
lps[0]=0;
while(i<m)
{
if(pattern[i]==pattern[len])
{
len++;
lps[i]=len;
i++;
}
else
{
if(len!=0)
{
len=lps[len-1];
}
else
{
lps[i]=0;
i++;
}
}
 
}
}
vector <int> kmp(int m)
{
vector <int> v;
char c;
int i=0;
int j=0;
while(true)
{
c=getchar();
if(c=='\n')
break;
while(true)
{
if(c==pattern[j])
{
j++;
 
if(j==m)
{
v.push_back(i-m+1);
j=lps[j-1];
}
break;
}
else if(j==0)
break;
else //  pattern doesnot match
j= lps[j-1];
}
i++;
 
}
return v;
}
 
int main()
{
    int s;
    int m;
    vector <int > v;
    while(scanf("%d",&m)==1)
    {
        getchar();
        pattern=new char[m+10];
        lps=new int[m+10];
        gets(pattern);
        longestprefixsuffix(m);
        v=kmp( m);
        s=v.size();
        for(int i=0;i<s;i++)
            printf("%d\n",v[i]);
            if(!s)
                printf("\n");
    delete []pattern;
    delete[] lps;
 
 
    }
   return 0;
}
 