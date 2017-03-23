#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
 
int main()
{
 
    int t;
 
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
         int male[n];
    int female[n];
        for(int i=0;i<n;i++)// input of male array
            scanf("%d",&male[i]);
         for(int i=0;i<n;i++)//input of female array
        scanf("%d",&female[i]);
        sort(male,male+n);
         sort(female,female+n);
         int total=0;
         for(int i=0;i<n;i++)
         total+=male[i]*female[i];
         cout<<total<<endl;
 
 
 
    }
    return 0;
}