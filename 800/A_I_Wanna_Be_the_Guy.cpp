#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 int q,p;
 cin>>q;
 unordered_map<int,int> mp;
 for(int i=0;i<q;i++){
    int x;
    cin>>x;
    mp[x]++;
 }
 cin>>p;
 for(int i=0;i<p;i++){
    int x;
    cin>>x;
    mp[x]++;
 }
 for(int i=1;i<=n;i++){
    if(mp[i]==0){
        cout<<"Oh, my keyboard!";
        return 0;
    }
 }
 cout<<"I become the guy.";
 return 0;
}