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
bool solve1(ll n){
    ll m=n;
    while(n>0){
        if(n%10!=0 && m%(n%10)!=0) return false;
        n/=10;
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    while(!(solve1(n))) n++;
    cout<<n<<nl;
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