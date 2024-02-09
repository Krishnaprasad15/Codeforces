#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    vector<int> a(n);
    for(auto &it:a) cin>>it;

    int ind=1,mx=a[0],cnt=0,sz=n;
    for(int i=1;i<n;i++){
        if(mx>a[i]){
            mx+=1;
            cnt++;
            sz--;
        }else{
            mx=a[i];
            ind=i+1;
        }
    }
    // if(sz!=1) cout<<ind;
    // else cout<<-1;
    cout<<ind;
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