#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int sum=0,num=n;
 while(n--){
    int it;
    cin>>it;
    sum+=it;
 }
 sum/=100;
 if(num==1 || sum%2==1 || (sum==2*num&&num%2==1)){
    cout<<"NO";
    return 0;
 }
 cout<<"YES";
 return 0;
}