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
ll mod= 1e9+7;
void solve(){
    ll n,k;
    cin>>n>>k;
    // k%=mod;
    vl a(n);
    for(auto&it:a) cin>>it;
    // for(ll i=0;i<n;i++){
    //     ll x;
    //     cin>>x;
    //     a[i]= x%k;
    // }
    // for(ll i=0;i<n)
    ll l=0,r=n-1,cnt=0;
    bool flag=true;
    while(l<=r){
        if(flag){
            a[l]--;
            if(a[l]==0){
                cnt++;
                l++;
            }
        }else{
            a[r]--;
            if(a[r]==0){
                cnt++;
                r--;
            }
        }
        k--;
        if(k==0) break;
        flag=!flag;
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

