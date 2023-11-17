#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll solve(ll n){
    ll cnt=0;
    for(ll i=1;i<=(ll)sqrt(n);i++){
        if(n%i==0){
            if(n/i==i) cnt++;
            else cnt+=2;
        }
    }
    return cnt;
}
int main() {
 ll a,b,c;
 cin>>a >>b >>c;
 ll mod=1073741824;
 ll sum=0;
 vector<ll> arr(a*b*c+1,-1);
 for(ll i=1;i<=a;i++){
    for(ll j=1;j<=b;j++){
        for(ll k=1;k<=c;k++){
            ll temp;
            if(arr[i*j*k]==-1){
                temp= solve(i*j*k);
                arr[i*j*k]=temp;
            }else temp=arr[i*j*k];
            sum= ((sum)%mod + temp%mod)%mod;
        }
    }
 }
 cout<<sum;
 return 0;
}