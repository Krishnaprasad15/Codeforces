#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 vector<int> a(n);
 for(auto &it:a) cin>>it;
 int mx=0,cnt;
 for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
            a[k]=1-a[k];
        }
        cnt=0;
        for(int k=0;k<n;k++){
            cnt+=(a[k]==1);
        }
        mx=max(mx,cnt);
        for(int k=i;k<=j;k++){
            a[k]=1-a[k];
        }
    }
 }
 cout<<mx;
 return 0;
}