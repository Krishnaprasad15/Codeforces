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
    int n;
    cin>>n;
    int a,b;
    cin>>a >>b;
    if(2*a<=b){
        cout<<n*a<<nl;
    }else{
        if(!(n&1)){
            cout<<b*(n/2)<<nl;
        }else cout<<b*(n/2)+a<<nl;
    }
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