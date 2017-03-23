#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <bits/stdc++.h>
 
using namespace std;
 string check;
class Trie {
    public:
        map<char, Trie> children;
        string value;
        bool flag;
 
        Trie(const string &);
        void add(char);
        string find(const string &);
        void insert(const string &);
        vector<string> all_prefixes();
        vector<string> autocomplete(const string &);
};
 
Trie::Trie(const string &val="") {
    value = val;
    flag = false;
}
 
void Trie::add(char c) {
	string val=string(1,c);
    if (value == "") 
        children[c] = Trie(val);
    else
        children[c] = Trie(value + c);
}
 
string Trie::find(const string &word) {
    Trie * node = this;
    for (int i = 0; i < word.length(); i++) {
        const char c = word[i];
        if (node->children.find(c) == node->children.end())
            return "";
        else 
            node = &node->children[c];
    }
    return node->value;
}
 
void Trie::insert(const string &word) {
    Trie * node = this;
    for (int i = 0; i < word.length(); i++) {
        const char c = word[i];
        if (node->children.find(c) == node->children.end()){
            node->add(c);
        }
        node = &node->children[c];
 
    }
 
    node->flag = true;
}
 
vector<string> Trie::all_prefixes() {
    vector<string> results;
 
    if (flag==true && value!=check){
        results.push_back(value);
    }
 
    if (children.size()) {
        map<char, Trie>::iterator iter;
        vector<string>::iterator node;
        for(iter = children.begin(); iter != children.end(); iter++) {
            vector<string> nodes = iter->second.all_prefixes();
            for(int i=0;i<nodes.size();i++){
			}
            results.insert(results.end(), nodes.begin(), nodes.end());
 
        }
    }
    return results;
}
 
vector<string> Trie::autocomplete(const string &prefix) {
    Trie * node = this;
 vector<string> results;
    for (int i = 0; i < prefix.length(); i++) {
        const char c = prefix[i];
        if (node->children.find(c) == node->children.end()){
        	results.push_back("No match.");
 
            return results;
        }
        else {
            node = &node->children[c];
 
    }
}
    return node->all_prefixes();
}
int main(){
 
int n;	cin>>n;
	Trie o;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		o.insert(s);
	}
	;
 int cases;cin>>cases;
for(int i=1;i<=cases;i++){
 
cin>>check;
	cout<<"Case #"<<i<<":"<<endl;
     vector <string > val=o.autocomplete(check);
     for(int i=0;i<val.size();i++){
     	cout<<val[i]<<endl;
	 }
 
	}
}
 