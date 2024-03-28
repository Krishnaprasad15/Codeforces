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
    for(int i=0;i<n;i++){
        int x=2;
        char hash='#',dot='.';
        if(i%2==1){
            hash='.';
            dot='#';
        }
        while(x--){
            for(int j=0;j<n;j++){
                int y=2;
                while(y--){
                    if(j%2==0) cout<<hash;
                    else cout<<dot;
                }
            }
            cout<<nl;
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