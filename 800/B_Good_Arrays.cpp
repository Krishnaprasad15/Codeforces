#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        mp[x]++;
    }
    for(auto it:mp){
        if(it.second>n/2){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES";
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