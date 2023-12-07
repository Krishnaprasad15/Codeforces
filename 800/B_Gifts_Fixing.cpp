#include <bits/stdc++.h> 
using namespace std;
void solve(){
    long long n;cin>>n;
    vector<int> a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    long long mn1= *min_element(a.begin(),a.end());
    long long mn2= *min_element(b.begin(),b.end());
    long long res=0;
    for(int i=0;i<n;i++){
        long long r1= a[i]-mn1;
        long long r2= b[i]-mn2;
        res+=(r1>r2? r1:r2);
    }
    cout<<res<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}