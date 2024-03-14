#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    int n;
    cin>>n;
    vi a(n);
    for(auto &it:a) cin>>it;
    if(n==1){
        cout<<0<<nl;
        return;
    }else if(n==2){
        if(a[0]==a[1]){
            cout<<0<<nl;
            return;
        }else{
            cout<<2<<nl;
            return;
        }
    }
    sort(all(a));
    int mx=INT_MIN,cnt=1;
    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]){
            cnt++;
        }else cnt=1;
        mx=max(cnt,mx);
    }
    // cout<<mx<<nl;
    if(mx==n){
        cout<<0<<nl;
    }else{
        // cout<<(n/mx)-1 <<" "<<abs(n-mx)<<nl;
        int res= n-mx;
        while(mx<n){
            mx*=2;
            res++;
        }
        cout<<res<<nl;
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