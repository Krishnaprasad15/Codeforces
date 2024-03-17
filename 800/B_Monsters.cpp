#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
bool compare(pair<int,int> &a,pair<int,int> &b){
    if(a.first!=b.first) return a.first>b.first;
    else return a.second<b.second;
}

void solve(){
    int n,k;
    cin>>n >>k;
    vi a(n),res;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]= x%k;
        if(a[i]==0) res.push_back(i+1);
    }
    vector<pair<int,int>> p;

    for(int i=0;i<n;i++){
        if(a[i]!=0) p.push_back({a[i],i+1});
    }
    sort(all(p),compare);
    for(int i=0;i<p.size();i++){
        res.push_back(p[i].second);
    }
    for(auto it:res) cout<<it<<" ";
    cout<<nl;
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