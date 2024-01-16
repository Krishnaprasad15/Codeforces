#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    if(!(n&1)){
        cout<<"YES"<<"\n";
        for(int i=0;i<n;i++){
            if(i%2) cout<<1<<" ";
            else cout<<-1<<" ";
        }
    }
    else if(n>3){
        cout<<"YES"<<"\n";
        for(int i=0;i<n;i++){
            if(i%2){
                cout<<(n/2)<<" ";
            }else{
                cout<<-((n/2)-1)<<" ";
            }
        }
    }else cout<<"NO";
    cout<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}