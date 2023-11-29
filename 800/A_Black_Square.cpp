#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int aa[4];
 int a,b,c,d;
 cin>>a >>b >>c >>d;
 aa[0]=a;
 aa[1]=b;
 aa[2]=c;
 aa[3]=d;
 string s;
 cin>>s;
 int res=0;
 for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        res+=aa[0];
    }else if(s[i]=='2') res+=aa[1];
    else if(s[i]=='3') res+=aa[2];
    else res+=aa[3];
  }
  cout<<res;
 return 0;
}