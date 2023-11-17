#include <bits/stdc++.h> 
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int pos1=n+1,pos2=n-1;
    if(pos1%3==0 || pos2%3==0) cout<<"First"<<"\n";
    else cout<<"Second"<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}