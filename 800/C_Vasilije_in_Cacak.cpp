#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,k,x;
    cin>>n >>k >>x;
    ll s1= n*(n+1)/2;
    ll s2= k*(k+1)/2;
    ll s3= s1- (n-k)*(n-k+1)/2;

    if(n==k){
        if(s1==x) cout<<"YES";
        else cout<<"NO";
    }else if(s2<=x && s3>=x) cout<<"YES";
    else cout<<"NO";
    cout<<"\n";
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
