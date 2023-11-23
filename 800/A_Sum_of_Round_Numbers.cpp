#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n,rem=0;
    cin>>n;
    vector<int> a;
    if(n>=1000){
        rem= n%1000;
        a.push_back(n-rem);
        n%=1000;
    }if(n>=100){
        rem= n%100;
        a.push_back(n-rem);
        n%=100;
    }if(n>=10){
        rem=n%10;
        a.push_back(n-rem);
        n%=10;
    }if(n>0&& n<10){
        a.push_back(n);
    }
    cout<<a.size();cout<<"\n";
    for(auto it:a) cout<<it<<" ";
    cout<<"\n";
 }
 return 0;
}