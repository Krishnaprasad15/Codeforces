#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main() {
 ll n;
 cin>>n;
 int x=n/2;
 cout<<x<<"\n";
 if(n%2==0){
    for(int i=0;i<x;i++){
        cout<<2<<" ";
    }
 }else{
    for(int i=0;i<x-1;i++){
        cout<<2<<" ";
    }
    cout<<3<<" ";
 }
 return 0;
}