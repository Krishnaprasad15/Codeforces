#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b.begin(),b.end());
    int mx=b[n-1],mx1;
    if(b[n-1]==b[n-2]) mx1=mx;
    else mx1=b[n-2];
    for(int i=0;i<n;i++){
        if(a[i]==mx) cout<<a[i]-mx1<<" ";
        else cout<<a[i]-mx<<" ";
    }
    cout<<endl;
 }
 return 0;
}