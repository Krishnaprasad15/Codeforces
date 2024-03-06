#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,m;
    cin>>n >>m;
    string s,x;
    cin>>s>>x;

    int cnt=0;
    while(true){
        if(s.find(x)!=string::npos){
            break;
        }
        s=s+s;
        cnt++;
        if(cnt>=6) break;
    }
    if(cnt>=6) cout<<-1<<"\n";
    else cout<<cnt<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}