#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='*' && s[i+1]=='*' && (i+1)<n) break;
        else if(s[i]=='@')cnt++;
    }
    cout<<cnt<<'\n';
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}