#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int a,b;
    cin>>a >>b;
    if((a+b)%2==0) cout<<"Bob"<<"\n";
    else cout<<"Alice"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}