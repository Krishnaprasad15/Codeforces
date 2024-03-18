#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,k;
    cin>>n >>k;

    vector<ll> a(n*k);
    for(auto &it:a) cin>>it;
    ll sum=0;
    ll md= (n%2==0)? n/2: (n+1)/2;

    ll shift= n-md+1,size=n*k;
    for(int i=0;i<k;i++){
        sum+= a[size-shift];
        size-=shift;    
    }
    cout<<sum<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}