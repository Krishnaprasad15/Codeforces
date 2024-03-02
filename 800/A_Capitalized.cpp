#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
 string s;
 cin>>s;
 if(isupper(s[0])){
    for(int i=1;i<s.size();i++){
        if(isupper(s[i])){
            cout<<"No";
            return;
        }
    }
 }else{
    cout<<"No";
    return ;
 }

 cout<<"Yes";
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}