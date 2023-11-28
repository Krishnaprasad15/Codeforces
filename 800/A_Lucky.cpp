#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    string s;
    cin>>s;
    int c1= (int)s[0]+(int)s[1]+(int)s[2],c2=(int)s[3]+(int)s[4]+(int)s[5];
    (c1==c2)? cout<<"YES"<<"\n":cout<<"NO"<<"\n";
 }
 return 0;
}