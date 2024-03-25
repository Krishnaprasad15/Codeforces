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
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    vector<pair<int,int>> b;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        if(x<=10){
            b.push_back({y,x});
        }
        a[i]=y;
    }
    sort(all(b));
    int mx= b[b.size()-1].first;
    for(int i=1;i<=n;i++){
        if(a[i]==mx){
            cout<<i<<nl;
            return;
        }
    }
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