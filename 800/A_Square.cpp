#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll x,y;
    set<ll> a,b;
    for(int i=0;i<4;i++){
        cin>>x >>y;
        a.insert(x);
        b.insert(y);
    }
    vector<ll> xx,yy;

    for(auto it:a) xx.push_back(it);
    for(auto it:b) yy.push_back(it);
    ll res= (xx[1]-xx[0])*(yy[1]-yy[0]);
    cout<<res<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}