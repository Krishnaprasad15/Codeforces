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
    ll n;
    cin>>n;
    vl a(n-1);
    for(auto &it:a) cin>>it;
    int res= 501;
    cout<<res<<" ";
    for(int i=0;i<n-1;i++){
        res+=a[i];
        cout<<res<<" ";
    }
    cout<<nl;
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