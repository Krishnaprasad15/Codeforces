#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll a,b,c,d;
    cin>>a >>b >>c >>d;

    ll r1=0,r2=0;
    r1=max((3*a)/10, a-(a/250)*c);
    r2=max((3*b)/10, b-(b/250)*d);

    if(r1>r2) cout<<"Misha";
    else if(r1<r2) cout<<"Vasya";
    else cout<<"Tie";
}
int main() {
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}