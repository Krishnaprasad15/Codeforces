#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m,k;
    cin>>n >> m>> k;
    vector<int> a(n),b(m);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int res=0,i=0,j=0;
    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            i++;
            j++;
            res++;
        }else if(a[i]<b[j]){
            i++;
        }else j++;
    }
    cout<<res;
    return 0;
}