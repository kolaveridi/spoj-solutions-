#include <algorithm>
    #include <cstdio>
    #include <iostream>
    #include <stack>
    using namespace std;
    #define max 100009
    #define ll long long
    ll getmaxarea(int hist[],int n){
    stack<int> s;
    ll maxarea=0;
    ll areawithtop;
    int i=0;
    while(i<n){
        if(s.empty()||hist[s.top()]<=hist[i])
            s.push(i++);
        else{
            int tp=s.top();
            s.pop();
     
        areawithtop=(ll)hist[tp]*(s.empty()?i:i-s.top()-1);
            if(maxarea<areawithtop)
                maxarea=areawithtop;
        }
    }
        while(s.empty()==false){
           int  tp=s.top();
            s.pop();
             areawithtop=(ll)hist[tp]*(s.empty()?i:i-s.top()-1);
            if(maxarea<areawithtop)
                maxarea=areawithtop;
     
        }
        return maxarea;
    }
    int main()
    {
        int n;
        int hist[max];
       while(scanf("%d",&n)==1 && n)
       {
        for(int i=0;i<n;i++)
        scanf("%d",&hist[i]);
        ll ans=getmaxarea( hist,n);
        printf("%lld\n",ans);
       }
        return 0;
    }
     