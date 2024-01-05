#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,sum=0;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        sum+= min(abs((s1[i]-'0')-(s2[i]-'0')),10-abs((s1[i]-'0')-(s2[i]-'0')));
    }
    cout<<sum;
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}