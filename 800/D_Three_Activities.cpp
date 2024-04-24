#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    vector<pair<long long,long long>> a,b,c;
    int n;
    cin>>n;

    for(ll i=0,x;i<n;i++){
        cin>>x;
        a.push_back({x,i});
    }
    for(ll i=0,x;i<n;i++){
        cin>>x;
        b.push_back({x,i});
    }
    for(ll i=0,x;i<n;i++){
        cin>>x;
        c.push_back({x,i});
    }

    sort(all(a));
    sort(all(b));
    sort(all(c));

    ll res=0;
    for(ll i=n-1;i>=n-3;i--){
        for(ll j=n-1;j>=n-3;j--){
            for(ll k=n-1;k>=n-3;k--){
                if(a[i].second!=b[j].second && b[j].second!=c[k].second && c[k].second!=a[i].second){
                    res= max(res,a[i].first+b[j].first+c[k].first);
                }
            }
        }
    }
    cout<<res<<nl;
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