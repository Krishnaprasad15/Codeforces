#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    int k = n%7;
    if(n - n%7 < (n/10)*10){
        cout<< (n + 7 - n%7)<<"\n";
    }
    else cout<< n - n%7<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}