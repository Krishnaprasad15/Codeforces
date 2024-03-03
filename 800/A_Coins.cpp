#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n >>k;
    if(k%2==0){
        if(n%2==0) cout<<"YES";
        else cout<<"NO";
    }else cout<<"YES";
    cout<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}