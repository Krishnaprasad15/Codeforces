#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int cnt=0,police=0;
 while(n--){
    int t;
    cin>>t;
    if(t==-1){
        if(police==0) cnt++;
        else police--;
    }
    else{
        police+=t;
    }
 }
 cout<<cnt;
 return 0;
}