#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<"\n";
        return;
    }
    if(n&1) cout<<-1;
    else{
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}