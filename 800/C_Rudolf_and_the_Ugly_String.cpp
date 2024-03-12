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
    int n;
    cin>>n;
    string s;
    cin>>s;

    int cnt=0;
    for(int i=0;i<n-2;i++){
        if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e') cnt++,i+=2;
        if(i+4<n && s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e') cnt++, i+=4;
        else if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p') cnt++,i+=2;
    }
    cout<<cnt<<nl;
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