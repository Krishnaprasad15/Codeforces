#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    set<int> st;
    for(auto &it:a){
        cin>>it;
        st.insert(it);
    }
    if(st.size()==1) cout<<"NO"<<"\n";
    else {
        cout<<"YES"<<"\n";
        cout<<a[0]<<" ";
        for(int i=n-1;i>0;i--) cout<<a[i]<<" ";
        cout<<"\n"; 
    }

}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
