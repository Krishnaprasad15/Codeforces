#include <bits/stdc++.h> 
using namespace std;
void solve(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int l=0,r=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            l=i;
            r=(s.size()-i)-1;
            if(l%2==0 && r%2==0){
                cout<<"YES"<<"\n";
                return;
            }else{
                l=0;
                r=0;
            }
        }
    }
    cout<<"NO"<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
 return 0;
}