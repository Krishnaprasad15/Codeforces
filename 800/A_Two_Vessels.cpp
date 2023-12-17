#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    float a,b,c;
    cin>>a >>b >>c;
    float mn= min(a,b);
    float mid=(a+b)/2;
    cout<<ceil((mid-mn)/c)<<"\n";

 }
 return 0;
}