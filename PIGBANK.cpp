#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <cstring>
using namespace std;
int weight[500];
int val[500];
int minimumamount[10000];
int emp;
int full;
int type;
int main()
{
int t;// test cases
scanf("%d",&t);
while(t--){
    scanf("%d %d",&emp,&full);
    int range=full-emp;
    scanf("%d",&type);
    for(int i=0;i<type;i++){
        scanf("%d %d",&val[i],&weight[i]);
    }
    memset(minimumamount,-1,sizeof minimumamount);
        minimumamount[0]=0;
    for(int i=1;i<=range;i++){// 110-10=100 checking from 1 to 100
        for(int j=0;j<type;j++)// two types
        {
            if(weight[j]>i || minimumamount[i-weight[j]]==-1)
                continue;
            if(minimumamount[i]==-1 || val[j]+minimumamount[i-weight[j]]<minimumamount[i])
                minimumamount[i]=val[j]+minimumamount[i-weight[j]];
        }
 
 
    }
    if(minimumamount[range]==-1)
        printf("This is impossible.\n");
    else
        printf("The minimum amount of money in the piggy-bank is %d.\n",minimumamount[range]);
 
 
}
    return 0;
}