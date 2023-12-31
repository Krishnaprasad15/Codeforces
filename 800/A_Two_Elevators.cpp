#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int a,b,c;
    cin>>a >>b >>c;

    int first = abs(a-1);
    int second= abs(b-c) + abs(c-1);
    if(first<second) cout<<1;
    else if(first>second) cout<<2;
    else cout<<3;
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