#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    int cnt=0,res=1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1) cnt++;
        res*=x;
    }
    int ans=0;
    if(cnt>n/2){
        ans= cnt-(n/2);
    }
    if(ans%2==1) res*=-1;
    if(res!=1) ans++;
    cout<<ans<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}