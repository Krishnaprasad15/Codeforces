#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    sort(a.begin(),a.end());
    int res=INT_MAX;
    for(int i=1;i<n;i++){
        res=min(res,a[i]-a[i-1]);
    }
    cout<<res<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--){
    solve();
 }
 return 0;
}