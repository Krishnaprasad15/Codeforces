#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    string b= "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin>>c;
    string s;
    cin>>s;
    // cout<<b.find('s');
    if(c=='R'){
        for(int i=0;i<s.size();i++){
            cout<<b[b.find(s[i])-1];
        }
    }else{
        for(int i=0;i<s.size();i++){
            cout<<b[b.find(s[i])+1];
        }
    }
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}