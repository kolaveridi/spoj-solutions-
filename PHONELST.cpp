#include <map>
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <bits/stdc++.h>
 
using namespace std;
bool valid;string word;
class Trie {
    public:
        map<char, Trie> children;
        string value;
        bool flag;
 
        Trie(const string &);
        void add(char);
        void insert(const string &);
        vector<string> all_prefixes();
        vector<string> autocomplete(const string &);
};
 
Trie::Trie(const string &val="") {
    value = val;
    flag = false;
}
 
void Trie::add(char c) {
    if (value == "") 
        children[c] = Trie(string(1, c));
    else
        children[c] = Trie(value + c);
}
 
 
void Trie::insert(const string &word) {
    Trie * node = this;
    for (int i = 0; i < word.length(); i++) {
        const char c = word[i];
        if (node->children.find(c) == node->children.end()){
            node->add(c);
        }
        node = &node->children[c];
        if(node->flag==true){
        	valid=false;
		}
		
         
    }
    
    node->flag = true;
    if(node->children.size()!=0){
    	valid=false;
	}
   
    
}
 
vector<string> Trie::all_prefixes() {
    vector<string> results;
 
    if (flag==true){
        results.push_back(value);
    }
 
	
 
    if (children.size()) {
        map<char, Trie>::iterator iter;
        vector<string>::iterator node;
        for(iter = children.begin(); iter != children.end(); iter++) {
            vector<string> nodes = iter->second.all_prefixes();
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
        	results.push_back("NOTHING");
        	
            return results;
        }
        else {
            node = &node->children[c];
           
    }
}
    return node->all_prefixes();
}
int main(){
int t;cin>>t;
while(t--){
	int n;
	cin>>n;
 
	Trie o;
	valid=true;
	for(int i=1;i<=n;i++){
	
		cin>>word;
		o.insert(word);
	}
	if(valid==false)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;	
		
	 }
		
	}
 