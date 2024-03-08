#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    string s;
    cin>>s;
    int c1=0,c2=0;
    for(auto it:s){
        if(it=='1') c1++;
        else c2++;
    }

    int cnt=0;
    for(auto it:s){
        if(it=='1'){
            if(c2==0) break;
            c2--;
            cnt++;
        }else{
            if(c1==0) break;
            c1--;
            cnt++;
        }
    }
    cout<<s.size()-cnt<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}