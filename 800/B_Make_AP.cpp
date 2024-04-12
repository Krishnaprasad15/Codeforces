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
    int a,b,c;
    cin>>a >>b >>c;

    if((2*b-c)>0 && (2*b-c)%a==0) YES;
    else if((a+c)%(2*b)==0) YES;
    else if((2*b-a)>0 && (2*b-a)%c==0) YES;
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