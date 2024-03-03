#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int a,b,c;
    cin>>a >>b >>c;
    if((c%2 + a) >b) cout<<"First"<<"\n";
    else cout<<"Second"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}