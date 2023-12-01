#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int a,b;
    cin>>a >>b;
    int res= min({max(2*a,b),max(2*b,a),a+b});
    res*=res;
    cout<<res<<"\n";
 }

 return 0;
}