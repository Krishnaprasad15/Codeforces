#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    sort(a.begin(),a.end());
    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=1) cnt++;
    }
    (cnt==n)? cout<<"YES":cout<<"NO";
    cout<<"\n";
 }
}