#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(auto &it:a) cin>>it;
    if(n==1){
        cout<<0<<"\n";
        return;
    }
    sort(a.begin(),a.end());
    ll sum=0;
    int i=0,j=n-1;
    while(i<j){
        sum+=(a[j]-a[i]);
        i++;
        j--;
    }
    cout<<sum<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--){
    solve();
 }
 return 0;
}