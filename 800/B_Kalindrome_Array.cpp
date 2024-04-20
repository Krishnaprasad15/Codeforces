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

bool solve1(vl a,int x){
    int i=0,j=a.size()-1;
    while(i<=j){
        if(a[i]==x) i++;
        else if(a[j]==x) j--;
        else if(a[i]!=a[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
void solve(){
    ll n;
    cin>>n;
    vl a(n);
    for(auto &it:a) cin>>it;
    bool flag= true;
    ll i=0,j=n-1;
    while(i<=j){
        if(a[i]!=a[j]){
            flag= solve1(a,a[i]) || solve1(a,a[j]);
            break;
        }
        i++;
        j--;
    }
    (flag)? YES: NO;
    

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