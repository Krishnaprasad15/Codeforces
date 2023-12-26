#include <bits/stdc++.h> 
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;
    int mx= *max_element(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        string s;
        cin>>s;
        for(int j=0;j<k;j++){
            if(a[i]==mx && s[j]=='D'){
                a[i]=-1;
            }else if(a[i]==0 && s[j]=='U'){
                a[i]=mx+1;
            }
            if(s[j]=='D'){
                a[i]+=1;
            }else a[i]-=1;
        }
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