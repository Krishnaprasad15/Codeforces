#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n==1) {
        cout<<"YES"<<"\n";
        return;
    }
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    sort(a.begin(),a.end());
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            // return;
            flag=false;
            break;
        }
    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";


}
int main() {
int t;
cin>>t;
while(t--) solve();
 return 0;
}