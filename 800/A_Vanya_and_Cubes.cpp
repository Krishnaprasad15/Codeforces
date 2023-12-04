#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int k=0,i=1,res=0;
 while(n>0){
    k=((i*i)+i)/2;
    if(k>n){
        break;
    }
    i++;
    n-=k;
    res++;
 }
 cout<<res;
 return 0;
}