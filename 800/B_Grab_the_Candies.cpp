#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &it:a) cin>>it;

    int m=0,b=0;
    for(auto it:a){
        if(it&1) b+=it;
        else m+=it;
    }
    if(m>b) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
 }
 return 0;
}