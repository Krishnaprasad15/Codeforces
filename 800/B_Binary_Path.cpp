#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std;
typedef long long ll;
 
// pair<string,ll> solve1(const string &s,const string &t, ll n){
//     vector<vector<ll>> dp(2,vector<ll>(n+1,0));

//     dp[0][1]= (s[0]=='0')? 1:0;
//     dp[1][1]= (t[0]=='0')? 1:0;

//     for(int i=2;i<=n;++i){
//         if(s[i-1]=='0'){
//             dp[0][i]+= dp[0][i-1]+dp[1][i-1];
//         }
//         if(t[i-1]=='0'){
//             dp[1][i]+=dp[0][i-1]+ dp[1][i-1];
//         }
//     }
//     string res;
//     int i=1,j=n;
//     while(i<2 || j>1){
//         if(i==1){
//             res+='D';
//             --j;
//         }else if(j==1){
//             res+='R';
//             ++i;
//         }else if(dp[0][j-1]<=dp[1][j-1]){
//             res+='R';
//             ++i;
//         }else {
//             res+='D';
//             --j;
//         }
//     } 
//     reverse(res.begin(),res.end());

//     return {res,dp[0][n]+dp[1][n]};

// }

void solve(){
    ll n;
    cin>>n;
    string s,t;
    cin>>s>>t;

    // pair<string,ll> res= solve1(s,t,n);
    // cout<<res.first<<"\n";
    // cout<<res.second<<"\n";
    int des= n-1;
    for(int i=0;i<n-1;i++){
        int up = s[i+1]-'0';
        int down = t[i]-'0';
        if((up==1) && (down==0)){
            des=i;
            break;
        }
    }
    string res="";
    for(int i=0;i<=des;i++){
        res+=s[i];
    }
    for(int i=des;i<n;i++){
        res+=t[i];
    }
    cout<<res<<"\n";
    int cnt =1;
    for(int i=des;i>0;i--){
        int up = s[i]-'0';
        int down = t[i-1]-'0';
        if(up==down) cnt++;
        else break;
    }
    cout<<cnt<<"\n";
}
int main() {
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}