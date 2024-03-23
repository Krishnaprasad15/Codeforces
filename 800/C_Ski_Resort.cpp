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
    ll n,k,q;
    cin>>n >>k >>q;

    vl a(n);
    for(auto &it:a) cin>>it;

    ll res=0,cnt=0,size=0;
    for(int i=0;i<n;i++){
        if(a[i]<=q){
            size++;
            if(size>=k){
                cnt++;
                res+=cnt;
            }
        }else{
            size=0;
            cnt=0;
        }
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