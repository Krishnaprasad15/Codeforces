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
    int mx= *max_element(a.begin(),a.end());
    int mn= *min_element(a.begin(),a.end());
    cout<<mx-mn<<"\n";
 }
 return 0;
}