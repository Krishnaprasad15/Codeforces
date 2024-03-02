#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    sort(a.begin(),a.end());
    
    int res= abs(a[0]-a[n-1]) + abs(a[n-1]-a[1])+abs(a[1]-a[n-2])+abs(a[0]-a[n-2]);
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