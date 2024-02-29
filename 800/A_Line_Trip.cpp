#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    int res=a[0];
    for(int i=1;i<n;i++){
        res=max(res,a[i]-a[i-1]);
    }
    res=max(res,2*(x-a[n-1]));
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