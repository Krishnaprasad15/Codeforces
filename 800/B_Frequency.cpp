#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    map<char,int> mp;
    string s;
    cin>>s;
    for(auto it:s) mp[it]++;

    char res;
    int mx=-1;
    for(auto it:mp){
        if(it.second>mx){
            mx=it.second;
            res=it.first;
        }
    }
    cout<<res;
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}