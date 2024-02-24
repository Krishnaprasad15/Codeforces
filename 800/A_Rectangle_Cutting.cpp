#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int a,b;
    cin>>a >>b;
    if(a>b) swap(a,b);
    if((a%2==1 && b%2==1) || (a%2==1 && b==2*a)){
        cout<<"NO"<<"\n";
    }else cout<<"YES"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}