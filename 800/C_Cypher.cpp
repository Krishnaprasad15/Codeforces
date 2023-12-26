#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    // int mx= *max_element(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        string s;
        cin>>s;
        for(int j=0;j<k;j++){
            if(s[j]=='D'){
                a[i]+=1;
            }else a[i]-=1;
            if(a[i]<0) a[i]=9;
        }
        if(a[i]<0) a[i]*=-1;
        a[i]%=10;
    }
    for(auto it:a) cout<<it<<" ";
    cout<<"\n";
}
int main() {
 int t;
 cin>>t;
 while(t--){
    solve();
 }
 return 0;
}