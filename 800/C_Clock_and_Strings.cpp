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
    int aa,bb,cc,dd;
    cin>>aa >>bb >>cc >>dd;
    int a= min(aa,bb);
    int b= max(aa,bb);
    int c= min(cc,dd);
    int d= max(cc,dd);
    if(((c>=a && c<=b) && (d>a && d>b)) || ((c<a && c<b) && (d>=a && d<=b))) YES;
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