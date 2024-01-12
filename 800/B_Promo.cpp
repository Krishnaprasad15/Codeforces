#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,q;
    cin>>n>>q;
    vector<long long> p(n),Q(n+1);
    for(int i=0;i<n;i++)
        cin>>p[i];
    sort(p.begin(),p.end());
    
    for(int i=0;i<n;i++)
    {
        Q[i+1]=Q[i]+ p[i];
    }
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        cout<<Q[n-x+y]-Q[n-x]<<endl;
    }   
}
int main() {
    // int t;
    // cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}