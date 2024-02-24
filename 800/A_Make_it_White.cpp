#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            a=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='B'){
            b=i;
            break;
        }
    }
    cout<<b-a+1<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}