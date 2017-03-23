#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
 
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        int max1=0;
        int max2=0;
        
        scanf("%d%d",&n,&m);
        int temp;
        for(int i=0;i<n;i++){
            scanf("%d",&temp);
            if(temp>max1)
                max1=temp;
 
        }
        for(int i=0;i<m;i++){
            scanf("%d",&temp);
            if(temp>max2)
                max2=temp;
        }
        if(max1>=max2)
            printf("Godzilla\n");
        else
            printf("MechaGodzilla\n");
    }
     return 0;
 
 
 
    }
 