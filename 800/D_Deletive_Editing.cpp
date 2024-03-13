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
    string s,t;
    cin>>s >>t;
    string res="";
    unordered_map<char,int> mp;
    for(auto it:t) mp[it]++;
    for(int i=s.size()-1;i>=0;i--){
        if(mp[s[i]]){
            res+=s[i];
            mp[s[i]]--;
        }
    }
    reverse(all(res));
    if(res==t) YES;
    else NO;
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