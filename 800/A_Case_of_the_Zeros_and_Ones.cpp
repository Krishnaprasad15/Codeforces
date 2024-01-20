#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int o=0,z=0;
    for(auto it:s){
        if(it=='1') o++;
        else z++;
        // cout<<o<<"\n";
        // cout<<z<<"\n";
    }
    int mn= min(o,z);
    mn+=mn;
    cout<<n-mn;
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}