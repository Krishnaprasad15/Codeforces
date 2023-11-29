#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    long long x,y,n,z,res;
    cin>>x >>y >>n;
    z= n/x;
    res= z*x+y;
    if(res>n){
        cout<<res-x<<"\n";
    }else cout<<res<<"\n";
 }
 return 0;
}