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
    int a,b,n;
    cin>>a >>b >>n;
    ll cnt=b-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        cnt+= min(x+1,a)-1;
    }
    cout<<cnt+1<<nl;
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