#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int cnt1=0,cnt2=0;
 for(int i=0;i<n;i++){
    int a,b;
    cin>>a >>b;
    if(a>b) cnt1++;
    else if(a<b)cnt2++;
 }
 if(cnt1>cnt2) cout<<"Mishka";
 else if(cnt1<cnt2) cout<<"Chris";
 else cout<<"Friendship is magic!^^" ;
 return 0;
}