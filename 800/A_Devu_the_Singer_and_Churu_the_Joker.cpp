#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,d;
    cin>>n >>d;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;

    ll sum=0;
    for(auto it:a) sum+=it;
    if(sum+10*(n-1)>d) cout<<-1;
    else cout<<(d-sum)/5;
    // cout<<jokes;
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}