#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    ll n,p; cin>>n>>p;
    vector<ll>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    ll ans=p;
    vector<pair<ll,ll>>v;
    for(ll i=0;i<n;i++){
        cin>>b[i];
        v.push_back({min(p,b[i]),a[i]});
    } 
    sort(all(v));
    ll person=n-1;
    for(ll i=0;i<n-1;i++){
        ans+=min(v[i].second,person)*v[i].first;
        person -=min(person,v[i].second);
    }
    cout<<ans<<endl;

}

int main() {
    optimize();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}