#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;

    int cnt= count(s.begin(),s.end(),'0');
    int cnt1= s.size()-cnt;
    int mn= min(cnt,cnt1);
    if(mn&1) cout<<"DA";
    else cout<<"NET";
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