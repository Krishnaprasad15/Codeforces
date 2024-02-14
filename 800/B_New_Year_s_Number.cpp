#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    ll x= n/2020;
    if(n%10<=x) cout<<"YES";
    else cout<<"NO";
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