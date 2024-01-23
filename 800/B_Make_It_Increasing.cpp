#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;

    ll cnt=0;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1] && a[i]>0){
            a[i]/=2;
            cnt++;
        }
        if(a[i]==a[i+1]){
            cnt=-1;
            break;
        }
    }
    cout<<cnt<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}