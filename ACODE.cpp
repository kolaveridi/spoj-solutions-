#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
unsigned long long dp[5001];
char text[5001]="";
int main()
{
    scanf("%s",text);
    while (strcmp(text, "0"))
    {
 
    int len =strlen(text);
    int index=1;
    memset(dp,0,sizeof dp);
    dp[0]=1;
    while (index<len)
    {
        int temp=0;
       temp=(text[index-1]-'0')*10;//
        temp+=(text[index]-'0');
        if(text[index]-'0')
            dp[index]=dp[index-1];
        if (temp>9 && temp<=26)
            dp[index]+=dp[index-2<0?0:index-2];
 
        index++;
    }
    printf ("%llu\n", dp[len-1]);
 scanf ("%s", text);
    }
 
    return 0;
}