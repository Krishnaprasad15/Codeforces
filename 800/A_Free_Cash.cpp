#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 map<pair<int,int>,int> mp;
 while(n--){
    int x,y;
    cin>>x >>y;
    mp[{x,y}]++;
 }
 int res=0;
 for(auto it:mp){
    res=max(res,it.second);
 }
 cout<<res;
 return 0;
}