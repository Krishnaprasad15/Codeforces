#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it:a) cin>>it;

    int c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(i%2!=a[i]%2){
            if(a[i]%2==0) c1++;
            else c2++;
        }
    }
    if(c1==c2) cout<<c1<<"\n";
    else cout<<-1<<"\n";
 }
 return 0;
}