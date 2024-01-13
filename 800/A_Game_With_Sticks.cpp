#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,m;
    cin>> n >>m;
    int mn= min(n,m);
    if(mn&1) cout<<"Akshat";
    else cout<<"Malvika";
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}