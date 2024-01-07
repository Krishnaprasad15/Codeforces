#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    cout<<n/2 + n%2<<"\n";
    int l=1,r=3*n;
    while(l<r){
        cout<<l<<" "<<r<<"\n";
        l+=3;
        r-=3; 
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}