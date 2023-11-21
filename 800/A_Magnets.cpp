#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int res=1;
 char prev='.';
 while(n--){
    string s;
    cin>>s;
    if(s[0]==prev && prev!='.') res++;
    prev=s[1];
 }
 cout<<res;
 return 0;
}