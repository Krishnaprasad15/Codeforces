#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

pair<int,int>ang[1000001];

void solve(){
        int n;cin>>n;
        bool yes=true;
        for (int i=1;i<=n;i++){
            cin>>ang[i].first;
            ang[i].second=i;
        }
        ang[0].first=0;
        ang[n+1].first=0;
        sort(ang,ang+n+1);
        for (int i=1;i<=n;i++){
            if (ang[i].first!=ang[i-1].first && ang[i].first!=ang[i+1].first){
                cout<<ang[i].second<<endl;
                yes=false;
                break;
            }
        }
        if (yes) cout<<-1<<endl;

}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}