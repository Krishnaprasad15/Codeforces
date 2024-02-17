#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);

    ll s1=0,s2=0;
    for(auto &it:a){
        cin>>it;
        s1+=it;
    }
    for(auto &it:b){
        cin>>it;
        s2+=it;
    }
    ll mx= *max_element(b.begin(),b.end());
    cout<<s1+s2-mx<<endl;
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}