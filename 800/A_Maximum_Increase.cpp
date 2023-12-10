#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 vector<int> a(n);
 for(auto &it:a) cin>>it;

 int mx=1,cnt=1;
 for(int i=0;i<n-1;i++){
    if(a[i]<a[i+1]) cnt++;
    else cnt=1;
    mx=max(mx,cnt);
 }
cout<<mx;
 return 0;
}