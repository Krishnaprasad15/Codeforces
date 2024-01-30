#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int h,n,m;
    cin>>h >>n >>m;
    bool flag= false;
    if(m*10>=h){
        cout<<"YES"<<"\n";
        return;
    }
        while(n--){
            h/=2;
            h+=10;
            if(h<=0){
                flag=true;
                break;
            }
        }
        while(m--){
            h-=10;
            if(h<=0){
                flag=true;
                break;
            }
        }
    if(flag) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}