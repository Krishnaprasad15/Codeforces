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

    int num = (s[0]-'0')*10 + (s[1]-'0');
    // cout<<num<<nl;
    string ampm;
    if(num>11) ampm=" PM\n";
    else ampm=" AM\n";
    string m= s.substr(3,2);
    if(num==0 || num==12){
        cout<<12<<":"<<m<<ampm;
    }else{
        if(num%12<10)cout<<0<<num%12<<":"<<m<<ampm;
        else cout<<num%12<<":"<<m<<ampm;
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