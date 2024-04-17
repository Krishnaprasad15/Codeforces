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
    
    int n,m;
    cin>>n >>m;
    int a[n][m];
    int res=0,mn=100;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            res+= abs(a[i][j]);
            if(abs(a[i][j])<100) mn= abs(a[i][j]);
        }
    }
    int zero=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // res+= ()
            if(a[i][j]<0) zero++;
        }
    }
    if(zero%2!=0) res-= 2*mn;
    cout<<res<<nl;

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