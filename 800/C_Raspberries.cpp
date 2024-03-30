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
    unordered_map<ll,ll>mp;
    ll x,p=1;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x%k]++;
        p*=x;
        p%=k;
    }
    if(p%k==0){
        cout<<0<<nl;
        return;
    }
    if(k==2){
        cout<<1<<nl;
    }else if(k==3){
        if(mp[2]) cout<<1<<nl;
        else cout<<2<<nl;
    }else if(k==4){
        if(mp[3]) cout<<1<<nl;
        else if(mp[2] && mp[1]) cout<<1<<nl;
        else if(mp[2]) cout<<2<<nl;
        else if(mp[1]>1) cout<<2<<nl;
        else cout<<3<<nl;
    }else if(k==5){
        if(mp[4]) cout<<1<<nl;
        else if(mp[3]) cout<<2<<nl;
        else if(mp[2]) cout<<3<<nl;
        else cout<<4<<nl;
    }
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