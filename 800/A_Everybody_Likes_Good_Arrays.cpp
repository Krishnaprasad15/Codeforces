#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    int cnt=0,odd=0,even=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            if(odd!=0){
                cnt+=(odd-1);
                odd=0;
            }
            even++;
        }else{
            if(even!=0){
                cnt+=(even-1);
                even=0;
            }
            odd++;
        }
    }
    if(odd!=0) cnt+=(odd-1);
    if(even!=0) cnt+=(even-1);
    cout<<cnt<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}