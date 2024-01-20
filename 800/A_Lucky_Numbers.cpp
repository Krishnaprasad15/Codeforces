#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    vector<ll> digits;
    ll l,r,diff,num,res,k=0;
    cin>> l >>r;
    for(int i=l;i<=r;i++){
        num= i;
        while(num>0){
            digits.push_back(num%10);
            num/=10;
        }
        sort(digits.begin(),digits.end());
        if(digits.size()==1) diff=0;
        else diff= digits[digits.size()-1]-digits[0];

        if(k<=diff){
            k=diff;
            res=i;
        }
        if(diff==9){
            res=i;
            digits.clear();
            break;
        }
        digits.clear();
    }
    cout<<res<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}