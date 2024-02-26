#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    int mn=INT_MIN,mx=INT_MAX;
    vector<int> a;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x==1) mn=max(mn,y);
        else if(x==2) mx=min(mx,y);
        else a.push_back(y);
    }
    if(mn>mx){
        cout<<0<<"\n";
        return;
    }
    int res= (mx+1)-mn;
    for(int i=0;i<a.size();i++){
        if(a[i]>=mn && a[i]<=mx) res--;
    }
    cout<<res<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}