#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt+=(a[i]==2);
    }
    int total=0,res=-1;
    for(int i=0;i<n;i++){
        if(a[i]==2){
            total++;
            cnt--;
        }
        if(cnt==total && res==-1){
            res=i+1;
            break;
        }
    }
    cout<<res<<"\n";

}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}