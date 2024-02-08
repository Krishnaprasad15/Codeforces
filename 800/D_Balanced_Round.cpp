#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,k;
    cin>>n >>k;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;
    sort(a.begin(),a.end());

    ll cnt=1,mx=INT_MIN;
    for(int i=1;i<n;i++){
        if(abs(a[i-1]-a[i])<=k){
            cnt++;
            mx=max(mx,cnt);
        }else cnt=1;
    }
    if(mx==INT_MIN) cout<<n-1<<"\n";
    else cout<<n-mx<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}