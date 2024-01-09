#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    sort(a.begin(),a.end());

    int sum=0;
    for(auto it:a) sum+=it;

    int s=0,cnt=0;
    for(int i=n-1;i>=0;i--){
        s+=a[i];
        cnt++;
        if(s>sum/2) break;
    }
    cout<<cnt;
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}