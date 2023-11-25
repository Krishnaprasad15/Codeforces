#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int p,b;
 cin>>p >>b;
 if(p%10==b || p%10==0) cout<<1;
 else {
    int temp=p,i=1;
    while(temp%10!=b){
        temp= p*i;
        i++;
        if(temp%10==0) break;
    }
    cout<<i-1;
 }
 return 0;
}