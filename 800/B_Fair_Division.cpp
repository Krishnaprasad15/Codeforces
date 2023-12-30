#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int a[n],o=0,t=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2) t++;
        else o++;
    }
    if(o%2==0){
        if(o==0 && t%2!=0) cout<<"NO";
        else cout<<"YES";
    }else cout<<"NO";
    cout<<"\n";
 }
 return 0;
}