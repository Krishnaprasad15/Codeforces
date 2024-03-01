#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n ;
    ll s1=0,s2=0,x;
    for(int i=0;i<n-1;i++){
        cin>>x;
        if(x>=0) s1+=x;
        else s2+=abs(x);
    }

    cout<<-(s1-s2)<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}