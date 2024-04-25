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
    vl o,e;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(i&1) o.push_back(x);
        else e.push_back(x);
    }

    ll g1=0,g2=0;
    for(auto it:o){
        g1= __gcd(it,g1);
    }
    bool flag= true;
    for(auto &it:e){
        if(it%g1==0){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<g1<<nl;
        return;
    }
    for(auto &it:e){
        g2= __gcd(g2,it);
    }

    for(auto &it:o){
        if(it%g2==0){
            cout<<0<<nl;
            return;
        }
    }
    cout<<g2<<nl;
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