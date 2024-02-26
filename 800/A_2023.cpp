#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,k;
    cin>>n >>k;
    ll res=1;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        res*=x;
    } 
    if(res>2023) {
        cout<<"NO"<<"\n";
    }
    else if(2023%res != 0){
        cout<<"NO"<<"\n";
        return;
    }else{
        cout<<"YES"<<"\n";
        cout<<(2023/res)<<" ";
        k-=1;
        while(k--){
            cout<<1<<" ";
        }
        cout<<"\n";
    }
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}