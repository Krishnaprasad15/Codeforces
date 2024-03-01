#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    ll res= log2(n);
    cout<<(long long)(pow(2,res))<<"\n";
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}