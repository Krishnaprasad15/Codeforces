#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int flag=0;
    for(int i=0;i<8;i++){
        int r=0;
        for(int j=0;j<8;j++){
            char c;
            cin>>c;
            if(c=='R') r++;
        }
        if(r==8) flag=1;
    }
    if(flag) cout<<"R\n";
    else cout<<"B\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}