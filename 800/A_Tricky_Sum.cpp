#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;
 
void solve(){
    ll n;
    cin>>n;
    ll sum= (n*(n+1))/2;
    ll pow=1;
    while(pow<=n){
        sum-=pow*2;
        pow*=2;
    }
    cout<<sum<<"\n";
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}