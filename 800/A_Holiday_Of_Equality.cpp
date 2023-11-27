#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 vector<int> a(n);
 for(auto &it:a) cin>>it;

 int mx= *max_element(a.begin(),a.end());
 int res=0;
 for(auto it:a){
    if(it<=mx){
        res+=(mx-it);
    }
 }
 cout<<res;
 return 0;
}