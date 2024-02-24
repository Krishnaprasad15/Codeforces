#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(2*n);
    for(auto &it:a) cin>>it;

    sort(a.begin(),a.end());

    int i=2*n-2,res=0;
    while(n--){
        res+=a[i];
        i-=2;
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