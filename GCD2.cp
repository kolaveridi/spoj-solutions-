#include <iostream>
#include <math.h>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string.h>
using namespace std;
// gcd(a,b)=gcd(b,a) so just reduce the number by mod
//gcd(4,100)=gcd(4,0) we divided 100 by 4 to make it small and then simple euclid on (4,0)
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
    return gcd(b,a%b);
 
}
int main()
{
    int n;
    scanf("%d",&n);
 
while(n--)
    {
        int a;
 char b[1000];
    scanf("%d%s",&a,b);
    if(a==0){     // if user enters 0 as first number then print b
        printf("%s\n",b);
        continue;
    }
    int len=strlen(b);
    int rem=0;
    for(int i=0;i<len;i++)
    {
    rem=(rem*10+(b[i]-'0'))%a;// number concept
 
    }
 
    printf("%d\n",gcd(a,rem));
    }
    return 0;
}