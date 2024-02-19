#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

vector<ll> a(200001);

void solve(){
    ll n;
    cin>>n;
    cout<<a[n]<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    ll sum=0;
    for(ll i=1;i<200001;i++){
        string s= to_string(i);
        for(auto it:s){
            sum+=(it-'0');
        }
        a[i]=sum;
    }
    while(t--){
        solve();
    }
    return 0;
}