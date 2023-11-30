#include <bits/stdc++.h> 
using namespace std;
void solve(){
     int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int> mp;
    char present= s[0];
    mp[present]=1;
    for(int i=1;i<n;i++){
        if(s[i]!=present && mp[s[i]]==1){
            cout<<"NO"<<"\n";
            return ;
        }
        mp[s[i]]=1;
        present=s[i];
    }
    cout<<"YES"<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--){
   solve();
 }
 return 0;
}