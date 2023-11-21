#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n,k;
 cin>>n >>k;
 vector<int> a(n+1);
 for(int i=1;i<=n;i++) cin>>a[i];

 int cnt=0,rating= a[k];
//  k++;
//  if(a[k]<=0){
//     cout<<0;
//     return 0;
//  }
//  while(k<=n){
//     if(a[k+1]==rating && a[k]>0) k++;
//     else break;
//  }
//  cout<<k;
    int res=0;
    for(int i=1;i<=n;i++){
        if(a[i]>=rating && a[i]!=0) res++;
    }
    cout<<res;
 return 0;
}