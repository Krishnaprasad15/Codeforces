#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    long long a,b,res;
    cin>>a >>b;
    if(a==0){
        res=1;
    }else if(b==0 && a!=b){
        res=a+1;
    }else res= (a-1)+2*(b+1);
    cout<<res<<"\n";
 }
 return 0;
}