#include <iostream>
#include <cstdio>
using namespace std;
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int sum=0;
        long long int stud,i,candy;
        scanf("%lld",&stud);
        for(int i=0;i<stud;i++){
                scanf("%lld",&candy);
        sum=(sum+candy)%stud;
 
 
        }
        if(sum==0)
            printf("YES\n");
        else
            printf("NO\n");
 
 
 
    }
 
    return 0;
}
 