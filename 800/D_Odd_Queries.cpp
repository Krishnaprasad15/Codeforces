#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,q;
    cin>>n >>q;
    ll sum=0;
    vector<ll> a(n+1),b(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
        b[i]=b[i-1];
        b[i]+=a[i];
    }
    ll temp= sum;
    while(q--){
        int l,r,k;
        cin>>l >>r >>k;
        ll res= b[n]-(b[r]-b[l-1])+ k*(r-l+1);
        if(res&1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        // sum=temp;
        // cout<<temp<<"\n";
    }

}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}