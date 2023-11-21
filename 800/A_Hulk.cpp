#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;

 string one= "I hate",two= "I love";
 for(int i=1;i<n;i++){
    if(i&1){
        cout<<one<<" "<<"that"<<" ";
    }else cout<<two<<" "<<"that"<<" ";
 }
 if(n&1) cout<<one<<" "<<"it";
 else cout<<two<<" "<<"it";
 return 0;
}