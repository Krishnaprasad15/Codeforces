#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int coins[]={15,10,6,3,1};

int solve2(int n){
    vector<int> dp(n+1,1e8);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<5;j++){
            if(coins[j]<=n){
                int res= dp[i-coins[j]];
                if(res!=INT_MAX && res+1<dp[i]){
                    dp[i]=res+1;
                }
            }
        }
    }
    return dp[n];
}
void solve(){
    int n;
    cin>>n;
    int res=0;
    for(int i=0;i<5;i++){
        if(n>=coins[i]){
            int coin= n/coins[i];
            res= coin-1;
            n%=coins[i];
            n+=coins[i];
            res+= solve2(n);
            cout<<res<<"\n";
            return;
        }
    }
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}