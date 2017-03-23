#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
 
int main()
{
    string s1,s2;
    int occur1[26];
    int occur2[26];
    while(cin>>s1>>s2){
                int l1=s1.length();
        int l2=s2.length();
        memset(occur1,0,sizeof occur1);
        memset(occur2,0,sizeof occur2);
        for(int i=0;i<l1;i++)
        occur1[s1[i]-'a']++;
        for(int i=0;i<l2;i++)
            occur2[s2[i]-'a']++;
 
 
            for(int i=0;i<26;i++)
        for(int j=min(occur1[i],occur2[i]);j>=1;j--)
            cout<<(char)('a'+i);
            cout<<'\n';
 
 
 
 
 
    }
 
    return 0;
}
 