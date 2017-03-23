#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
using namespace std;
// 100/5=20
//20/5=4
//4/5=0 so trailing zero =20+4+0=24
int main()
{
    int t;
    int num;
 
    scanf("%d",&t);
 
 
   for(int i=0;i<t;i++)
    {
 
            scanf("%d",&num);
           int count=0;
      do{
        num/=5;
        count+=num;
 
      }
      while(num>0);
       printf("%d\n",count);
    }
 
}
 