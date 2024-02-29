#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    if(k>=2) cout<<"YES";
    else if(is_sorted(a.begin(),a.end())) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}