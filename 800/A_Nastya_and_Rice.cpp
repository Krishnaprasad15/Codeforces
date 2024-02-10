#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,a,b,c,d;
    cin>>n >> a >>b >>c >>d;

    ll mx= n*(a+b);
    ll mn= n*(a-b);
    for(ll i=(c-d);i<=(c+d);i++){
        if(i>=mn && i<=mx){
            cout<<"YES"<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}