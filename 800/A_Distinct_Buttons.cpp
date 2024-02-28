#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    bool l= false,r=false,u=false,d=false;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x >>y;
        if(x<0) l=true;
        else if(x>0) r=true;

        if(y<0) d=true;
        else if(y>0) u=true;
    }
    if(l && r && u && d) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}