#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    int mx=n;
    mx=max(mx,max(n/10,n%10+(n/100)*10));
    cout<<mx;
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}