#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,res=0;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        res+= abs(x);
    }
    cout<<res<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}