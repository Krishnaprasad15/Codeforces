#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    int cnt=0;
    vector<int> a;
    int x;
    cin>>x;
    a.push_back(x);
    for(int i=1;i<n;i++){
        cin>>x;
        if(x>=a[cnt]){
            a.push_back(x);
            cnt++;
        }else{
            a.push_back(x);
            a.push_back(x);
            cnt+=2;
        }
    }
    cout<<cnt+1<<"\n";
    for(auto it:a) cout<<it<<" ";
    cout<<'\n';
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}