#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    int cnt=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int temp= __gcd(a[i],2*a[j]);
            if(temp==1) {
                temp= __gcd(a[j],2*a[i]);
            }
            if(temp>1) cnt++;
        }
    }
    cout<<cnt<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}