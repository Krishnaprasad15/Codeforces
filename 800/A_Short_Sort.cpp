#include <bits/stdc++.h> 
using namespace std;
void solve(){
    string a;
    cin>>a;
    if((a[0]=='a' && a[2]=='c') || (a[0]=='c' && a[2]=='a')){
        cout<<"YES"<<"\n";
        return;
    }
    if(a[0]=='c' || a[2]=='a') {
        cout<<"NO"<<"\n";
        return;
    }else{
        cout<<"YES"<<"\n";
        return;
    }
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}