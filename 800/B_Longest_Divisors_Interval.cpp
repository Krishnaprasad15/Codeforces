#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    for(int i=1;i<=100;i++){
        if(n%i!=0){
            cout<<i-1<<"\n";
            break;
        }
    }
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}