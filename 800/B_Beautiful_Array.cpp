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
    ll n,k,b,s;
    cin>>n >>k >>b >>s;

    vl res(n,0);
    res[0]= k*b;
    ll cur= s- k*b;
    if(cur<0){
        cout<<-1<<nl;
        return;
    }

    for(int i=0;i<n;i++){
        ll temp = min(k-1,cur);
        res[i]+=temp;
        cur-=temp;
    }
    if(cur>0){
        cout<<-1<<nl;
        return;
    } 
    for(auto it:res) cout<<it<<" ";
    cout<<nl;
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