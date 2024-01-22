#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,k;
    cin>>n >>k;
    bool f1=0,f2=0;
    while(n--){
        ll l,r;
        cin>>l >>r;
        if(l==k) f1=1;
        if(r==k) f2=1;
    }
    if(f1 && f2) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}