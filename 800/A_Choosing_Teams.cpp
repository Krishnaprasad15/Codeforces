#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n,k;
 cin>>n >>k;
 int cnt=0;
 for(int i=0;i<n;i++){
    int t;
    cin>>t;
    if(5-k>=t) cnt++;
 }
 cout<<cnt/3;
 return 0;

}