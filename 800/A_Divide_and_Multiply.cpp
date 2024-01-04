#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n;
    cin>>n ;
    ll a[n];
    ll mx= LONG_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx= max(mx,a[i]);
    }
    sort(a,a+n);
    ll sum=0,cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i]%2==0) cnt+=(a[i]/2);
    }
    while(cnt--) a[n-1]*=2;

    for(int i=0;i<n-1;i++){
        if(a[i]%2==0) sum+=1;
        else sum+=a[i];
    }
    sum+=a[n-1];
    cout<<sum<<"\n";
}
int main() {
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}