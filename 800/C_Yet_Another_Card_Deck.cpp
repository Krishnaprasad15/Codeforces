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
    ll n,q;
    cin>>n >>q;

    vl a(n);
    for(auto &it:a) cin>>it;
    vl freq(51,0);
    for(int i=n-1;i>=0;i--){
        freq[a[i]]=i+1;
    }

    while(q--){
        ll x;
        cin>>x;
        cout<< freq[x]<<" ";
        for(int i=0;i<51;i++){
            if(freq[i]<freq[x]){
                freq[i]++;
            }
        }
        freq[x]=1;
    }
    cout<<nl;
}

int main() {
    optimize();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}