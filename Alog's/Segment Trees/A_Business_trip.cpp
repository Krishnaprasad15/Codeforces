#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 vector<int> a(12);
 for(auto &it:a) cin>>it;
 sort(a.begin(),a.end(),greater<int>());
 int res=0;
 for(int i=0;i<12;i++){
    if(n>0){
        n-=a[i];
        res++;
    }else break;
 }
 (n<=0)? cout<<res:cout<<-1;
 return 0;
}