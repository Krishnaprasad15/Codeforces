#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n,k;
    cin>>n >>k;
    bool flag=false;
    while(n--){
        int x;
        cin>>x;
        if(x==k) flag=true;
    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
 }
 return 0;
}