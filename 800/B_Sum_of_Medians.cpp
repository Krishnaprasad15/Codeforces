#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n >>k;

    vector<int> a(n*k);
    for(auto &it:a) cin>>it;

    int cnt=0,md=0;
    if(n%2==0) md=n/2;
    else md= (n+1)/2;

    for(int i=md-1;i<n*k;i+=n){
        cnt+=a[i];
    }
    cout<<cnt<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}