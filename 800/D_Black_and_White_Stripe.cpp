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
    ll n,k;
    cin>>n >>k;
    string s;
    cin>>s;

    ll l=0,r=0,res=INT_MAX,cnt=0;
    while(r<n){
        if(s[r]=='W') cnt++;

        if(r-l+1==k){
            res=min(res,cnt);
            if(s[l]=='W') cnt--;
            l++;
        }
        r++;
    }
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