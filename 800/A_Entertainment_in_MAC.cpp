#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int sz= s.size()-1;
    int i=0,j=sz;
    while(i<=j){
        if(s[i]<s[j]) {cout<<s<<"\n"; return;}
        else if(s[i]>s[j]){
            string k= s;
            reverse(k.begin(),k.end());
            cout<<k+s<<"\n";
            return;
        }else{i++;j--;}
    }
    cout<<s<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}