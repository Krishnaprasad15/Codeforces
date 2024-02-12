#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;
    ll sum=0,flag=0;
    for(ll i=0;i<n-1;i++){
        if(a[i]>0){
            sum+=a[i];
            flag=1;
        }else if(flag) sum++;
    }
    cout<<sum<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}