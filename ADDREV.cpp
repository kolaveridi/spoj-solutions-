#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
// function to print reverse of a number
// nothing much as code or an algo
int reverse(int n)
{
int rev=0;
while(n>0)
{
rev=rev*10+(n%10);
n=n/10;
}
return rev;
}
int main ()
{
int t;
int a,b;
scanf("%d",&t);
while(t--){
 
 
scanf("%d%d",&a,&b);
printf("%d\n",reverse(reverse(a)+reverse(b)));
}
return 0;
}
 