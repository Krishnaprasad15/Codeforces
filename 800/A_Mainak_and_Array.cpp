#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n ;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;
    int mx= *max_element(a.begin(),a.end());
    int mn= *min_element(a.begin(),a.end());
    vector<ll> res;
    for(int i=0;i<n-1;i++){
        res.push_back(a[i]-a[i+1]);
    }
    res.push_back(a[n-1]-mn);
    res.push_back(mx-a[0]);
    cout<<*max_element(res.begin(),res.end())<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}