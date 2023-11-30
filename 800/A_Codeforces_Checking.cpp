#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    char c;
    cin>>c;
    string s="codeforces";
    bool flag=false;
    for(auto it:s){
        if(it==c){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
 }
 return 0;
}