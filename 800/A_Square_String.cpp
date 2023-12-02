#include <bits/stdc++.h> 
using namespace std;
void solve(){
    string s;
    cin>>s;
    if(s.size()%2!=0){
        cout<<"NO"<<"\n";
        return;
    }
    int i=0,j=s.size()/2;
    while(j<s.size()){
        if(s[i]!=s[j]){
            cout<<"NO"<<"\n";
            return;
        }
        i++;
        j++;
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