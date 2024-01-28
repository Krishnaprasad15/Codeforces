#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,b,k;
    cin>>n >>b >>k;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;

    ll cnt=0,sum=0;
    for(ll i=0;i<n;i++){
        if(a[i]<=b) sum+=a[i];
        if(sum>k) {
            cnt++;
            sum=0;
        }
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