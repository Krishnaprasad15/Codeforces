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
    ll n,x;
    cin>>n>>x;
    vl a(n);
    for(auto &it:a) cin>>it;

    // ll v= (a[0]>x)? a[0]-x: a[0]+x;
    ll l=a[0]-x,r=a[0]+x;
    ll cnt=0;
    for(int i=1;i<n;i++){
        l= max(l,a[i]-x);
        r= min(r,a[i]+x);
        if(l>r){
            cnt++;
            // v= (a[i]>x)? a[i]-x:a[i]+x;
            l= a[i]-x;
            r= a[i]+x;
        }
    }
    cout<<cnt<<nl;
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