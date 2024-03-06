#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    sort(a.begin(),a.end());
    if(a[0]==a[n-1]){
        cout<<-1<<"\n";
        return;
    }
    int mx= a[n-1],k=n-2;
    while(mx==a[k]) k--;
    cout<<k+1<<" "<<n-k-1<<"\n";
    for(int i=0;i<=k;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(int i=k+1;i<n;i++){
        cout<<a[i]<<" ";
    }
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