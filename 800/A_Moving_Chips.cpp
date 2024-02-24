#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> aa(n);
    for(auto &it:aa) cin>>it;

    int a=0,b=0,res=0;
    for(ll i=0;i<n;i++){
        if(aa[i]==1){
            a=i;
            break;
        }
    }
    for(ll i=0;i<n;i++){
        if(aa[i]==1){
            b=i;
        }
    }
    if(a==b){
        cout<<0<<"\n";
        return;
    }
    for(ll i=a;i<=b;i++){
        if(aa[i]==0) res++;
    }
    cout<<res<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}