#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res=1;
    for(int i=0;i<n;i++){
        res=max(res,(s[i]-'0')-48);
    }
    cout<<res<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}