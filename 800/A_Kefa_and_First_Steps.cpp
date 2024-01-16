#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int mx=1;
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(a[i-1]<=a[i]){
            cnt++;
            mx=max(mx,cnt);
        }else cnt=1;
    }
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