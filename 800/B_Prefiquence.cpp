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
    int n,m;
    cin>>n >>m;
    string s1,s2;
    cin>>s1>>s2;

    int i=0,j=0,cnt=0;
    while(i<n && j<m){
        if(s1[i]==s2[j]){
            cnt++;
            i++;
            j++;
        }
        else j++;
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