#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,sum=0,flag=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        sum+=x;
        if(x%3==1) flag=1;
    }
    if(sum%3==0) cout<<0;
    else if(sum%3==2 || flag) cout<<1;
    else cout<<2;
    cout<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}