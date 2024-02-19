#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;
    
    int c1=0,c2=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') c1++;
        else c2++;
    }
    if(c1>c2) cout<<"A"<<"\n";
    else cout<<"B"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}