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
    ll a,b;
    cin>>a >>b;
    ll cnt=0;
    if(a==b){
        cout<<0<<nl;
        return;
    }  

    if(a>b){
        while(a!=b){
        if(a%8==0 && a/8>=b){
            cnt++;
            a/=8;
        }else if(a%4==0 && a/4>=b){
            cnt++;
            a/=4;
        }else if(a%2==0 && a/2>=b){
            cnt++;
            a/=2;
        }else break;
        }
    }else{
        while(a!=b){

        if(a*8<=b){
            cnt++;
            a*=8;
        }else if(a*4<=b){
            cnt++;
            a*=4;
        }else if(a*2<=b){
            cnt++;
            a*=2;
        }else break;
        }
    }
    if(a==b) cout<<cnt<<nl;
    else cout<<-1<<nl;
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