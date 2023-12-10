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

    int cnt=0;
    for(auto it:a) if(it%2==0) cnt++;

    if(cnt==n || (cnt==0 && n%2==0)) cout<<"No"<<"\n";
    else cout<<"Yes"<<"\n";
 }
 return 0;
}