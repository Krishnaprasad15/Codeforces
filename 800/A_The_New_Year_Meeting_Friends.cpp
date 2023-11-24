#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int a,b,c;
 int mx=INT_MIN,mn=INT_MAX;
 cin>>a >>b >>c;
 mx= max(a,max(b,c));
 mn=min(a,min(b,c));
 cout<<mx-mn;
  return 0;
}