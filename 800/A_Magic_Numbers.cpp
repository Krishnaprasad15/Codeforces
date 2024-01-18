#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    string s;
    cin >> s;
    string s1 ;
    int k=0;
    if (s[0] == '1') {
        s1="1";
        for (ll i = 1; i < s.size(); i++) {
            if (s[i] == '1') {
 
                if (s1 == "1" || s1 == "14" || s1 == "144") {
 
                    s1 ="1";
                } else {
                    k=1;
                    break;
                }
            } else
                s1 += s[i];
        }
    } else {
        k=1;
    }
    if(k==1 || s1!="1" && s1 != "14" && s1 != "144") cout<<"NO";
    else cout<<"YES";
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}