#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;
    int cnt=0;
    string a="1";
    a+=s;

    for(int i=1;i<=4;i++){
        if(a[i]=='0') a[i]+=10;
        cnt+= abs(a[i]-a[i-1])+1;
    }
    cout<<cnt<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}