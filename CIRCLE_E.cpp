#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
// soddy circles only formula
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        double r1,r2,r3;//radius
        scanf("%lf%lf%lf",&r1,&r2,&r3);
        double denominator=((r1*r2+r1*r3+r2*r3)+2*(sqrt((r1*r2*r3)*(r1+r2+r3))));
        double numerator=(r1*r2*r3);
        double ans=numerator/denominator;
        printf("%lf\n",ans);
    }
    return 0;
}
 