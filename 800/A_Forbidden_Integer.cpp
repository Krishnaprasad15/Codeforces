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
    int n,k,x;
    cin>>n>>k>>x;
    if(x!=1){
        YES;
        cout<<n<<nl;
        for(int i=0;i<n;i++) cout<<1<<" ";
        cout<<nl;
    }else{
        if(k==1) NO;
        else{
            if(!(n&1)){
                YES;
                cout<<n/2<<nl;
                for(int i=0;i<n/2;i++) cout<<2<<" ";
                cout<<nl;
            }else{
                if(k>=3){
                    YES;
                    cout<<n/2<<nl;
                    for(int i=0;i<n/2 -1;i++) cout<<2<<" ";
                    cout<<3<<nl;
                }else NO;
            }
        } 
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