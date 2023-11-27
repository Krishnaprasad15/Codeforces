#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    unordered_map<int,int> mp;
    for(int i=0;i<n;i++) mp[a[i]]++;
    int val=0;
    for(auto it:mp) if(it.second==1){
        val=it.first;
        break;
    }
    for(int i=0;i<n;i++){
        if(a[i]==val){
            cout<<i+1<<"\n";
            break;
        }
    }
 }
 return 0;
}