#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n,k;
 cin>>n >>k;
 vector<int> a(n+1);
 for(int i=1;i<=n;i++) cin>>a[i];

 for(int i=k+1;i<=n;i++){
    if(a[i]!=a[k]){
        cout<<-1;
        return 0;
    }
 }
 int cnt=0;
 for(int i=k-1;i>=1;i--){
    if(a[i]==a[k]) cnt++;
    else break;
 }
 cout<<k-cnt-1;
//  return 0;
}