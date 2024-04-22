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
    char c;
    string s;
    cin>>n >>c >>s;
    if(c=='g'){
        cout<<0<<nl;
        return ;
    }
    s+=s;
    vector<int> a;
    for(int i=0;i<2*n;i++){
        if(s[i]=='g') a.push_back(i);
    }

    int res=0;

    for(int i=0;i<n;i++){
        if(s[i]==c){
            int up= lower_bound(a.begin(),a.end(),i)-a.begin();
            res= max(res,a[up]-i);
        }
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