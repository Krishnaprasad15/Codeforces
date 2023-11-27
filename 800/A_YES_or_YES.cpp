#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    string s;
    cin>>s;
    int cnt=0;
    string k= "YES";
    for(int i=0;i<3;i++){
        if(toupper(s[i])==k[i]) cnt++;
        else break;
    }
    if(cnt==3) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
 }
 return 0;
}