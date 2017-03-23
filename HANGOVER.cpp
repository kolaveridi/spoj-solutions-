#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    float number;// as per question number is float
    scanf("%f",&number);
    while(number!=0.00)
    {
 
        float len=0.00;
        int n=0;
        while(len<number)
        {
            n++;
            len=len+1.00/(n+1.00);
    }
    printf("%d card(s)\n",n);
    scanf("%f",&number);
    }
    return 0;
 
 
}