#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,g=0,mx=INT_MIN;
    cin>>n;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        g=__gcd(g,x);
        mx=max(mx,x);
    }
    cout<<mx/g<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}