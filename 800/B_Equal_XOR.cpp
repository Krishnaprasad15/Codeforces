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
    ll n,k;
    cin>>n >>k;
    vl a(2*n);
    for(auto &it:a) cin>>it;

    for(int i=1;i<=2*k;i++) cout<<i<<" ";
    cout<<nl;
    for(int i=1;i<=2*k;i++) cout<<i<<" ";
    cout<<nl;

}

int main() {
    optimize();
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

    