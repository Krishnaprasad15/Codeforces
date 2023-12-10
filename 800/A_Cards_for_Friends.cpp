#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int w,h,n;
    cin>>w >>h >>n;
    // if(n==1 && w!=0 && h!=0){
    //     cout<<"YES"<<"\n";
    //     return;
    // }
    int cnt=1;
    while(cnt<=n){
        if((w%2!=0) && (h%2!=0)) break;
        if(w%2==0 && h%2==0){
            if(w>h){
                w/=2;
                cnt=cnt+cnt;    
            }else {
                h/=2;
                cnt=cnt+cnt;    
            }
        }else if(w%2==0){
            w/=2;
            cnt=cnt+cnt;    
        }else if(h%2==0){
            h/=2;
            cnt=cnt+cnt;    
        }
    }
    if(cnt>=n) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}