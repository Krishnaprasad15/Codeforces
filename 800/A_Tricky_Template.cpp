#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string a,b,c;
    cin>>a >>b >>c;

    // int cnt=0;
    bool flag=0;
    for(int i=0;i<n;i++){
        if(a[i]!=c[i] && b[i]!=c[i]){
            flag=1;
            break;
        }
    }
    if(!flag) cout<<"NO"<<"\n";
    else cout<<"YES"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}