#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,k;
    cin>>n >>k;
    string s;
    cin>>s;
    // int arr[26]={0};
    // for(int i=0;i<n;i++){
    //     arr[s[i]-'a']++;
    // }
    // map<int,int> mp;
    // for(int i=0;i<26;i++){
    //     mp[arr[i]%2]++;
    // }
    int cnt=0;
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(auto it:mp){
        if(it.second%2==1) cnt++;
    }

    if(k>=(cnt-1)) cout<<"YES"<<"\n";
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