#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int a[n][2];
 for(int i=0;i<n;i++){
    for(int j=0;j<2;j++) cin>>a[i][j];
 }
 int cnt=0;
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i][0]==a[j][1]) cnt++;
    }
 }
 cout<<cnt;
 return 0;
}