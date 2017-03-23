#include <vector>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
// concept from quora.com
vector<int> longestprefixsuffix(string s) {
vector<int> lps(s.length());
lps[0] = 0;
 int k=0;
for(int i = 1; i < s.length(); i++) {
 
while(k > 0 && s[i] != s[k]) {
k= lps[k - 1];
}
if(s[i] == s[k])
    k++;
lps[i]=k;
}
 
return lps;
}
 
void solve(string s, string ans, string rev) {
 
vector<int> storeresult = longestprefixsuffix(s);
 
 int lastindexvalue=storeresult[storeresult.size()-1];
 
for(int i = lastindexvalue; i < n; i++) ans += rev[i];
cout<<ans<<"\n";
}
 
 
char pat[10000000];
int main() {
while(scanf("%s",pat) != EOF) {
string s = (string)pat;
string p = "";
p += s;
 
n = s.length();
 
reverse(p.begin(), p.end());
 
 
p += "#";
p += s;
 
 
solve(p, s, p);
}
return 0;
 
}
 