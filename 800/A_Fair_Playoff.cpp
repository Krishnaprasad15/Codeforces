#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int a[4];
    for(int i=0;i<4;i++) cin>>a[i];

    int mx1= max(a[0],a[1]),mx2=max(a[2],a[3]);
    int mx= max(mx1,mx2),mn=min(mx1,mx2);
    for(int i=0;i<4;i++){
        if(a[i]>mn && a[i]!=mx){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}