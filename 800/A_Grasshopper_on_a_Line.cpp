#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int x,k;
    cin>>x>>k;
    if(x%k!=0){
        cout<<1<<"\n";
        cout<<x<<"\n";
    }else{
        cout<<2<<"\n";
        cout<<x-1<<" "<<1<<"\n";
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