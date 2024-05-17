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
    string s;
    cin>>s;
    int res=1;
    bool flag= false;
    for(int i=0;i<s.size()-1;i++){
        res+= (s[i]!=s[i+1]);
        flag|= (s[i]=='0' && s[i+1]=='1');
    }
    cout<<res-flag<<nl;
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