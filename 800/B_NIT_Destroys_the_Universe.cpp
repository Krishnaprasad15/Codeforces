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
    int cnt=0,c1=0;
    for(auto &it:a){
        cin>>it;
        if(it==0) cnt++;
    }
    if(cnt==n) cout<<0<<nl;
    else if(cnt==0) cout<<1<<nl;
    else {
        for(int i=1;i<n;i++){
            if(a[i]!=0 && a[i-1]==0) c1++;
        }
        if(a[0]!=0) c1++;
        cout<<min(c1,2)<<nl;
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