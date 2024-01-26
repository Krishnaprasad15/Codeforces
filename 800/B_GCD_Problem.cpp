#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    if(!(n&1)) cout<<2<<" "<<(n-3)<<" "<<1<<"\n";
    else{
        int num= (n-1)/2;
        if(num%2==0) cout<<num-1<<" "<<num+1<<" "<<1<<"\n";
        else cout<<num-2<<" "<<num+2<<" "<<1<<"\n";
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}