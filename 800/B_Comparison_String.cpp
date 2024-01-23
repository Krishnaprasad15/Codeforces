#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;
    int cnt1=1,cnt2=1;
    int mx1=INT_MIN,mx2=INT_MIN;
    if(n==1){
        cout<<2<<"\n";
        return;
    }
    for(int i=0;i<n-1;i++){
        if(s[i]=='<' && s[i+1]=='<') cnt1++;
        else if(s[i]=='>' && s[i+1]=='>') cnt2++;
        else {
            cnt1=1;
            cnt2=1;
        }
        mx1=max(mx1,cnt1);
        mx2=max(mx2,cnt2);
    }
    cout<<max(mx1,mx2)+1<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}