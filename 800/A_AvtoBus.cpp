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
    if(n&1 || n<=3) cout<<-1<<nl;
    else{
        n>>=1;
        ll r1= n/3;
        if(n%3==2 || n%3==1) r1++;
        ll r2= n/2;
        cout<<min(r1,r2)<<" "<<max(r1,r2)<<nl;
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