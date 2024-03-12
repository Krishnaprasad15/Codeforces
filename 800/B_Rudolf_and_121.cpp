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

    for(int i=0;i<n-2;i++){
        if(a[i]<0){
            NO;
            return;
        }
        a[i+1]-= a[i]*2;
        a[i+2]-= a[i];
        a[i]-=a[i];
    }
    if(count(all(a),0)==n) YES;
    else NO;
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