#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    for(int i=1;i<n-1;i++){
        if(a[i-1]<a[i] && a[i]>a[i+1]){
            cout<<"YES"<<"\n";
            cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
            return;
        }
    }
    cout<<"NO"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}