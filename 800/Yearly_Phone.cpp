#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;

    string s="";
    int cnt=0;
    while(cnt<2){
        s+=((n%10)+'0');
        n/=10;
        cnt++;
    }
    s+='K';
    reverse(s.begin(),s.end());
    cout<<s;
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}