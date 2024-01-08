#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;
bool fun(ll n){
    while(n%2==0){
        n/=2;
    }
    return n>1;
}
void solve(){
    ll n;
    cin>>n;
    if(fun(n)) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}