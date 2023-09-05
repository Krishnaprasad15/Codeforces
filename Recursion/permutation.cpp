#include<bits/stdc++.h>
using namespace std;
void solve(int ind,string &s,vector<string>&res){
	if(ind>=s.size()){
        for(int i=0;i<res.size();i++){
            if(res[i]==s) return;
	    }
	    res.push_back(s);
        return;
	}
	for(int i=ind;i<s.size();i++){
	    swap(s[i],s[ind]);
	    solve(ind+1,s,res);
        swap(s[i],s[ind]);
    }
}
vector<string>find_permutation(string S){
	vector<string>res;
	solve(0,S,res);
	sort(res.begin(),res.end());
    return res;
}

int main(){
    string s;
    cin>>s;
    vector<string> res= find_permutation(s);
    for(auto it:res){
        cout<<it<<" ";
    }
}