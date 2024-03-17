#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    int n,x;
    cin>>n;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    int res=1;
    for(auto it:mp){
        res=max(res,it.second);
    }
    cout<<res<<nl;
}

int main() {
    optimize();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}