#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    vector<int> a(26);
    for(int i=0;i<n;i++){
        a[s[i]-'a']++;
    }
    int mx= *max_element(a.begin(),a.end());
    if(2*mx-n>=0) cout<<2*mx-n;
    else cout<<n%2;
    cout<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}