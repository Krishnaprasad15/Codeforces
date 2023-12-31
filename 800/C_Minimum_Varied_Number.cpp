#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    int res=0;
    for(int i=9;i>=0;i--){
        if(i<=n && n>0){
            res= res*10 +i;
            n-=i;
        }else continue;
    }
    int ans=res,ress=0;
    while(ans>0){
        ress= ans%10 + ress*10;
        ans/=10;
    }
    cout<<ress<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}