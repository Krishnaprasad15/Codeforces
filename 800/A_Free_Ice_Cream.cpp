#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
int main() {
 ll n,x;
 cin>>n >>x;
 ll dis=0;
 char ch;
 ll a;
 while(n--){
    cin>>ch >>a;
    if(ch=='+'){
        x+=a;
    }else if(ch=='-' && a<=x){
        x-=a;
    }else dis++;
 }
 cout<<x<<" "<<dis;
 return 0;
}