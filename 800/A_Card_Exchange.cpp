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
 
int a[101];
void solve(){
    int n,k;
    cin>>n >>k;
    for(int i=1;i<=n;i++) cin>>a[i];

    sort(a+1,a+1+n);
    a[n+1]=-1;
    int res=0,cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]!=a[i+1]){
            cnt++;
            res=max(res,cnt);
            cnt=0;
        }else cnt++;
    }
    if(res<k){
        cout<<n<<nl;
        return ;
    }
    cout<<min(n,k-1)<<nl;


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