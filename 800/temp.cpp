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
 
 long long solve(vector<int>& coins, int k) {
        long long md= k/coins.size();
        // priority_queue<long long,vector<long long>,greater<long long>> pq;
        priority_queue<long long> pq;
        for(int i=0;i<coins.size();i++){
            pq.push(coins[i]);
            long long temp= 2*coins[i];

            for(int j=0;j<md;i++){
                pq.push(temp);
                while(pq.size()>k) pq.pop();
                temp+=coins[i];
            }
        }
        return pq.top();
 }
int main() {
    optimize();
    int t=1;
    // cin>>t;
    while(t--){
        int n,k;
        cin>>n >>k;
        vi a(n);
        for(auto &it:a) cin>>it;
        cout<<solve(a,k);
    }
    return 0;
}