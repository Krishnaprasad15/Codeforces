#include <bits/stdc++.h> 
using namespace std;
 
 void solve(){
    int n;
    cin>>n;
    vector<int> arr(2*n);
    for(auto &it:arr) cin>>it;
    int sum=0;
    for(auto it:arr){
        if(it%2==1) sum++;
    }
    cout<<(sum==n? "Yes\n":"No\n");
 }
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}