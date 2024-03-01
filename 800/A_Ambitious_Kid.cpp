#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n ;
    int res=INT_MAX,temp=-1,x;
    for(int i=0;i<n;i++){
        cin>>x;
        x=abs(x);
        res=min(res,x);
    }
    cout<<res;
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}