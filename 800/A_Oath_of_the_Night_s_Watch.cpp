#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);

    for(auto &it:a) cin>>it;
    sort(a.begin(),a.end());
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]!=a[0] && a[i]!=a[n-1]) cnt++;
    }
    cout<<cnt;
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}