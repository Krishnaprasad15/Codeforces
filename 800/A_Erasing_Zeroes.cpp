#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;
    int a=0,b=0,res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            a=i;
            break;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') b=i;
    }
    if(a==b){
        cout<<'0'<<'\n';
        return;
    }
    for(int i=a;i<=b;i++){
        if(s[i]=='0') res++; 
    }
    cout<<res<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}