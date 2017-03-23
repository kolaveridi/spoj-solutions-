#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
 
int main()
{
    int t;
    char data[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",data);
        int len=strlen(data);
        int res=1;
        for(int i=1;i<len;i++)
        {
            if(data[i]==data[i-1])
                res*=2;
        }
 
 
 
    printf("%d\n",res);
    }
    return 0;
} 