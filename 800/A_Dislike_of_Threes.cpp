#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int k;
    cin>>k;
    int i=1;
    while(k>0){
        if(i%3!=0 && i%10!=3) k--;
        i++;
    }
    cout<<i-1<<"\n";
 }
 return 0;
}