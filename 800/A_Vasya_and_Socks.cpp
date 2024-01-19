#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,m;
    cin>>n >>m;
    // int res=0;
    for(int i=1;i<100;i++){
        if(m*i<=n){
            n++;
        }else break;
    }
    cout<<n;
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}