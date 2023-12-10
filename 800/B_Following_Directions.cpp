#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int flag=0;
    int x=0,y=0;
    // cout<<s<<"\n";
    for(int i=0;i<n;i++){
        if(s[i]=='R') x+=1;
        else if(s[i]=='L') x-=1;
        else if(s[i]=='U') y+=1;
        else if(s[i]=='D') y-=1;
        // cout<<x<<" "<<y<<"\n";
        if(x==1 && y==1){
            flag=1;
            break;
        }
    }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}