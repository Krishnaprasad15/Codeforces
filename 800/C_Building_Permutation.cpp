#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main() {
 ll n;
 cin>>n;
 vector<int> a(n);
 for(auto &it:a) cin>>it;
 ll cnt=0;
 sort(a.begin(),a.end());
 for(int i=0;i<n;i++){
    cnt+=abs(a[i]-(i+1));
 }
 cout<<cnt;
 return 0;
}

// -3 -3 3 3 5
// 1   2 3 4 5
// 4   5 0 1 0