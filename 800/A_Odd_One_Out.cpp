#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    unordered_map<int,int> mp;
    int a;
    for(int i=0;i<3;i++){
        cin>>a;
        mp[a]++;
    }
    for(auto it:mp){
        if(it.second==1){
            cout<<it.first<<"\n";
        }
    }
 }
 return 0;
}