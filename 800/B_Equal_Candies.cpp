#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    int mn= *min_element(a.begin(),a.end());
    int res=0;
    for(auto it:a) res+=(it-mn);
    cout<<res<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}