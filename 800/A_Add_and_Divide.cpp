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
    while(a!=0){
        if(a==b){
            cnt+=2;
            break;
            // b+=1;
        }
        if(b&1) b+=1;
        else a/=b;
        cnt++;
    }
    cout<<cnt<<nl;
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