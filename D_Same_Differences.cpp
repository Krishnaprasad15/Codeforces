#include <bits/stdc++.h> 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &it:arr) cin>>it;
    long long cnt=0;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cnt+=mp[arr[i]-(i+1)]++;
    }
    
    cout<<cnt<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}