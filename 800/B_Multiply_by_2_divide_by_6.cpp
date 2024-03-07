#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n;

    ll c1=0,c2=0;
    while(n%2==0){
        n/=2;
        c1++;
    }
    while(n%3==0){
        n/=3;
        c2++;
    }

    if(n==1 && c1<=c2){
        cout<<2*c2-c1<<"\n";
    }else cout<<-1<<"\n";
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}