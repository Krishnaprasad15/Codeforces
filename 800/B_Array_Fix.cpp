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
    int n;
    cin>>n;
    vi a(n);
    for(auto &it:a) cin>>it;
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) flag=false;
    }
    if(flag){
        YES;
        return;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]%10>a[i+1]%10){
            NO;
            return;
        }
    }
    YES;
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