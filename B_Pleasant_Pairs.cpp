#include <bits/stdc++.h> 
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long arr[n];
    // for(auto &it:arr) cin>>it;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=(arr[i]-(i%arr[i]));j<=n;j=arr[i]+j){
            if(i<j && arr[i]*arr[j]==i+j) cnt++;
        }
    }
    cout<<cnt<<endl;
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}