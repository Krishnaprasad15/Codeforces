#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    int res=0;
    for(int i=0;i<n;i++){
        if(a[i]>=b[i] || k==0) break;
        else swap(a[i],b[i]);
        k--;
    }
    for(auto it:a) res+=it;
    cout<<res<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}