#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    ll n;
    cin>>n;
    vl a(n);
    unordered_map<int,int>mp;
    for(auto &it:a){
        cin>>it;
        mp[it]++;
    }
    for(auto it:mp) if(it.second==1){
        cout<<-1<<nl;
        return;
    }
    ll res=1;
    for(int i=0;i<n-1;i++){
        if(a[i]!=a[i+1]){
            cout<<res<<" ";
            res=i+2;
        }else cout<<i+2<<" ";
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