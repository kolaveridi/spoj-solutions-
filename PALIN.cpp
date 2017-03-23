#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
// to  print next palindrome
int main ()
{
int t;// test cases
char s[1000001];
scanf("%d",&t);
while(t--)
{
scanf("%s",&s);
bool lcopy=false;
int l=strlen(s);// to find out the length
int L=l/2-1;// L MEANS BEGINNING OF LEFT PART
int R=(l+1)/2;// R MEANS BEGINNING OF RIGHT PART
while(L>=0)
{
if(s[L]<s[R])//123456 HERE K[L]=3 AND K[R]=4  SO K[L]<K[R] SO
// WE COPY LEFT PART AFTER INCREMENTING MID PART
{
lcopy=false;
break;// MOVE OUT OF LOOP INSTANTLY
}
if(s[L]>s[R])// 987654 HEREWE DON'T INCREMENT WE JUST COPY THE LEFT PART
{
lcopy=true;
break;
}
L--;// WE MOVE AWAY IF MIDDLE LETTERS ARE SAME
R++;
}
 
if(!lcopy) // reverse value of false and if it reverses to true we move further
{
bool carry=true;
int mid=(l-1)/2;
while(carry&&(mid>=0))
{
s[mid]++;
if(s[mid]==':')
{
carry=true;// IF S[MID]=10  WE HAVE CARRY 1
s[mid]='0';// we fill mid with zero for caSE 9+1=10
}
else
carry=false;// NO CARRY IF S[MID}++ ={1,2,3,4,5,6,7,8}
mid--;
}
if(carry)
{
putchar('1');
for (int i=0;i<l-1;i++)
putchar('0');
putchar('1');
putchar('\n');
continue;
}
}
// copY part
for (int j=0;j<l/2;j++)
{
s[l-j-1]=s[j];
}
printf("%s\n",s);
}
return 0;
} 