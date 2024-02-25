#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n >>k;
    string s="";
    for(char i=0;i<k;i++){
        s+=char('a'+i);
    }
    while(n--){
        cout<<s;
    }
    cout<<'\n';
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}