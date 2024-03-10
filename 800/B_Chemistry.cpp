#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n >>k;
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
    }
    map<int,int> mp;
    for(int i=0;i<26;i++){
        mp[arr[i]%2]++;
    }
    if(k>=mp[1]-1) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}