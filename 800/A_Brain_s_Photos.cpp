#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n,m;
 cin>>n >>m;
 unordered_map<char,int> mp;
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        char k;
        cin>>k;
        // a[k-'0']++;
        mp[k]++;
    }
 }
//  cout<<a['Y']<<"\n";
 if(mp['C']==0 && mp['M']==0 && mp['Y']==0) cout<<"#Black&White";
 else cout<<"#Color";
 return 0;
}