#include <bits/stdc++.h> 
using namespace std;
void solve(){
    string s;
    cin>>s;
    for(int i=1;i<=8;i++){
        if(i!=(s[1]-'0')){
            cout<<s[0]<<i<<"\n";
        }
    }
    for(char ch='a';ch<='h';ch++){
        if(ch!=s[0]){
            cout<<ch<<s[1]<<"\n";
        }
    }
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}