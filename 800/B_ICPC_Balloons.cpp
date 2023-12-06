#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(mp.find(s[i])==mp.end()) cnt+=2;
        else cnt+=1;
        mp[s[i]]++;
    }
    cout<<cnt<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--) solve();
 return 0;
}