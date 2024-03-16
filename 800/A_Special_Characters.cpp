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
    if(n&1){
        NO;
        return;
    }else{
        YES;
        if(n%4==0){
            for(int i=0;i<n/4;i++){
                cout<<"AABB";
            }
            cout<<nl;
        }else{
            for(int i=0;i<n/4;i++){
                cout<<"AABB";
            }
            cout<<"AA"<<nl;
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