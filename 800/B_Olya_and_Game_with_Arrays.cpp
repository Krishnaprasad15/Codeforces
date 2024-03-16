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
    int n,m;
    cin>>n;
    vector<vector<ll>> a;
    for(int i=0;i<n;i++){
        cin>>m;
        vector<ll> p(m);
        for(auto &it:p) cin>>it;
        a.push_back(p);
    }

    for(int i=0;i<n;i++) sort(a[i].begin(),a[i].end());

    ll x=a[0][0],y=a[0][1],res=0;
    for(int i=0;i<n;i++){
        x= min(a[i][0],x);
        y= min(a[i][1],y);
        res+=a[i][1];
    }

    res-=y;
    res+=x;
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