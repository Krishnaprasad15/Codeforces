#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main() {
 ll n;
 cin>>n;
 vector<ll> a(n);
 for(auto &it:a) cin>>it;
 sort(a.begin(),a.end());
 ll mx=a[n-1],mn=a[0];
 ll cnt_mn= count(a.begin(),a.end(),mn);
 ll cnt_mx= count(a.begin(),a.end(),mx);
 ll cnt= cnt_mx*cnt_mn;
 if(mn==mx) cnt= (n-1)*n/2;
 cout<<mx-mn<<" "<<cnt;
 return 0;
}