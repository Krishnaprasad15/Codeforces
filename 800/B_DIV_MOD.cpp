#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    ll n,m;
    cin>>n >>m;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    stack<ll> st;
    for(int i=0;i<n;i++){
        if(st.empty()){
            st.push(a[i]);
            continue;
        }
        if(st.top()<m){
            ll raw= st.top()+a[i];
            st.pop();
            st.push(raw);
        }else st.push(a[i]);
    }
    ll res= st.size();
    if(st.top()<m) res--;
    cout<<res<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}