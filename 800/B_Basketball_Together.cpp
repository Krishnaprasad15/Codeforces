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
    ll n,d;
    cin>>n >>d;
    vl a(n);
    for(auto &it:a) cin>>it;

    sort(all(a));
    ll sum=0,cnt=0,j=0;
    for(int i=n-1;i>=0;i--){
        sum+=a[i];
        while(sum<=d && j<i){
            sum+=a[i];
            j++;
        }
        if(sum>d) cnt++;
        sum=0;
    }
    cout<<cnt;
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