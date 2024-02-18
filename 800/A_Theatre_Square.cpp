#include <bits/stdc++.h> 
using namespace std;
typedef long long int ll;
 
void solve(){
    ll n,m,a;
    cin>>n >>m >>a;
    cout<<((n+a-1)/a)*((m+a-1)/a);
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}