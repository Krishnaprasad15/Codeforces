#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    unordered_map<string,int> mp;
    vector<string> a,b,c;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        mp[x]++;
        a.push_back(x);
    }
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        mp[x]++;
        b.push_back(x);
    }
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        mp[x]++;
        c.push_back(x);
    }
    int c1=0,c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(mp[a[i]]==1) c1+=3;
        else if(mp[a[i]]==2) c1+=1;
        if(mp[b[i]]==1) c2+=3;
        else if(mp[b[i]]==2) c2+=1;
        if(mp[c[i]]==1) c3+=3;
        else if(mp[c[i]]==2) c3+=1;
    }
    cout<<c1<<" "<<c2<<" "<<c3<<"\n"; 
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}