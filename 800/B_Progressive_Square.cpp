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
    ll n,c,d;
    cin>>n >>c>>d;
    map<ll,ll>mp;
    ll mn= LONG_LONG_MAX;
    for(int i=0;i<n*n;i++){
        ll x;
        cin>>x;
        mp[x]++;
        mn=min(mn,x);
    }
    int m=mn,row;
    for(int i=0;i<n;i++){
        m=mn+i*c;
        row=m;
        if(!mp[row]){
            NO;
            return;
        }
        for(int j=0;j<n;j++){
            row=m+j*d;
            if(!mp[row]){
                NO;
                return;
            }
            mp[row]--;
        }
    }
    YES;
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