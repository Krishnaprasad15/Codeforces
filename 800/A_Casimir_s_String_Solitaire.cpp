#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    for(auto it:s){
        if(it=='A') a++;
        else if(it=='B') b++;
        else c++;
    }
    if((a+c)==b) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
 }
 return 0;
}