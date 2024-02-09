#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll x,n;
    cin>>x >>n;
    for(ll i=1;i<=n%4;++i){
        ll d= n-(n%4-i);
        if(x&1) x+=d;
        else x-=d;
    }
    cout<<x<<"\n";
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}