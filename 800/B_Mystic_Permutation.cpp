#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1),b(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[i]=i;
    }
    if(n==1){
        cout<<-1<<"\n";
        return;
    }
    for(int i=1;i<=n;i++){
        if(a[i]==b[i]){
            if(i==n) swap(b[i],b[i-1]);
            else swap(b[i],b[i+1]);
        }
    }
    for(int i=1;i<=n;i++) cout<<b[i]<<" ";
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