#include <bits/stdc++.h> 
using namespace std;
typedef  long long ll;
void solve(){
    ll a,b;
    cin>>a >>b;

    if(a%b==0){
        cout<<0<<"\n";
        return;
    }else{
        cout<<b-(a%b)<<"\n";
    }
}
int main() {
 ll t;
 cin>>t;
 while(t--) solve();
 return 0;
}