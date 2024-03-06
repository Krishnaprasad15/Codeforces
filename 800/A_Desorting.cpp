#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;

    ll mn= LONG_LONG_MAX;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<0){
            cout<<0<<"\n";
            return;
        }
        mn=min(mn,a[i+1]-a[i]);
    }
    cout<<mn/2 + 1<<"\n";
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}