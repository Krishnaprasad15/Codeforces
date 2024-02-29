#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt=0,res=0,mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt++;
            res++;
        }else if(s[i]=='#'){
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    mx=max(mx,cnt);
    if(mx>=3) cout<<2<<"\n";
    else cout<<res<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}