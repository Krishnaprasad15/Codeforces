#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=26;i++){
        for(int j=1;j<=26;j++){
            for(int k=1;k<=26;k++){
                if(i+j+k==n){
                    cout<<char(i-1+'a')<<char(j-1+'a')<<char(k-1+'a')<<"\n";
                    // cout<<1<<'\n';

                    return;
                }
            }
        }
    }
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}