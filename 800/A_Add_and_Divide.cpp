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
    ll a,b;
    cin>>a >>b;
    ll cnt=0;
    if(a<b){
        cout<<1<<nl;
        return;
    }else if(a==b){
        cout<<2<<nl;
        return;
    }

    while(a>b){
        a/=b;
        cnt++;
    }

    if(a==b) cnt+=2;
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