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
    cin>>n;
    ll o=0,z=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1) o++;
        else if(x==0) z++;
    }

    cout<< (1LL<<z)*(o)<<nl;
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