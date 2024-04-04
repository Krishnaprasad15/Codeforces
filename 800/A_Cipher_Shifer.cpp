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
    string res="";
    int n;
    cin>>n;
    string s;
    cin>>s;
    // res.push_back(s[0]);
    int i=0,j=1;
    while(j<n){
        if(s[i]!=s[j]) j++;
        else{
            res.push_back(s[i]);
            i=j+1;
            j+=2;
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