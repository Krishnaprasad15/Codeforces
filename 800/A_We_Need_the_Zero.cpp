#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    int res=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        res^=x;
    }
    if(n%2==0){
        if(res==0) cout<<0;
        else cout<<-1;
    }else cout<<res;
    cout<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}