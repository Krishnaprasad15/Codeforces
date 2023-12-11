#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
void solve(){
    ll n;
    cin>>n;
    ll mn=LONG_MAX;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        // if(mn<a[i]){
        //     mn=a[i];
        // }
        mn=min(mn,a[i]);
    }
    // bool f=true;
    // cout<<mn<<"\n";
    ll sum=1;
    for(int i=0;i<n;i++){
        if(mn==a[i]){
            a[i]=a[i]+1;
            break;
        }
    }
    for(auto it:a) sum*=it;
    cout<<sum<<"\n";
}
int main() {
 ll t;
 cin>>t;
 while(t--) solve();
 return 0;
}