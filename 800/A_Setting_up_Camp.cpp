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
    ll a,b,c;
    cin>>a >>b >>c;
    ll res= a+ b/3;
    b%=3;

    if(b!=0){
        c-= (3-b);
        res++;
    }
    if(c<0){
        cout<<-1<<nl;
        return;
    }

    if(c%3==0) res+= c/3;
    else res+= (c/3)+1;
    cout<<res<<nl;
}

int main() {
    optimize();
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}