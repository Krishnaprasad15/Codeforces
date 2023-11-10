#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n,m;
 cin>>n >>m;
 vector<int> a(m),b(m);
 for(int i=0;i<m;i++){
    cin>>a[i];
    b[i]=a[i];
 }
 int mn=0,mx=0;
 for(int i=0;i<n;i++){
    sort(a.begin(),a.end());
    mx+=a[m-1];
    a[m-1]--;
 }
 int j=0;
 sort(b.begin(),b.end());
 for(int i=0;i<n;i++){
    mn+=b[j];
    b[j]--;
    if(b[j]==0) j++;
 }
 cout<<mx<<" "<<mn;
 return 0;
}