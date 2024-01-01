#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    if(n==1) cout<<"NO";
    else{
        for(int i=0;i<n;i++){
            if(s[i]=='Q') cnt++;
            else cnt--;
            if(cnt<0) cnt=0;
        }
        if(cnt<=0) cout<<"YES";
        else cout<<"NO";
    }
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