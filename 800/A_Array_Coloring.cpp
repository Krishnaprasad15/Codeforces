#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    int odd=0;
    for(auto it:a) if(it%2!=0) odd++;
    if(odd==0 || odd%2==0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}