#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int cnt=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='1') cnt++;
        }
        if(cnt>=1) st.insert(cnt);
    }
    if(st.size()==1) cout<<"SQUARE"<<"\n";
    else cout<<"TRIANGLE"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}