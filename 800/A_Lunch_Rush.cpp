#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n >>k;
    int res=INT_MIN;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x >>y;
        int val;
        if(y>k) val= x- (y-k);
        else val=x;\
        res= max(res,val);
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