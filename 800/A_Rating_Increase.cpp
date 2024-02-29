#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;
    for(int i=1;i<s.size();i++){
        string a= s.substr(0,i);
        string b= s.substr(i);
        if(a[0]=='0' || b[0]=='0') continue;
        if(a.size()<b.size() || (a.size()==b.size() && (a<b))){
            cout<<a <<" "<<b<<"\n";
            return;
        }
    }
    cout<<-1<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

