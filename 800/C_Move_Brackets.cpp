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
    string s;
    cin>>s;
    stack<char> st;
    int cnt=0;
    for(int i=0;i<n;i++){
        // if(st.empty()) st.push(s[i]);
        if(s[i]=='(') st.push(s[i]);
        else if(s[i]==')' && !st.empty() && st.top()=='(') st.pop();
        else if(s[i]==')')cnt++;
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