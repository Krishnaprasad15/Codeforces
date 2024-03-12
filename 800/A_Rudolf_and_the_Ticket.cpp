#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    int cnt=0;
    int n,m,k;
    cin>>n >>m >>k;
    vi a(n),b(m);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if((a[i]+b[j])<=k) cnt++;
        }
    }
    cout<<cnt<<nl;
}

int main() {
    // optimize();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}