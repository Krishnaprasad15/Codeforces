#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> mp;
    for(auto &it:a){
        cin>>it;
        mp[it]++;
    }
    if(mp.size()==1) cout<<"Yes";
    else if(mp.size()==2){
        for(auto it:mp) {
            if(it.second==n/2 || it.second== (n/2)+(n%2)){ cout<<"Yes"; break;}
            else {
                cout<<"No";
                break;
            }
        }
    }else cout<<"No";
    cout<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}