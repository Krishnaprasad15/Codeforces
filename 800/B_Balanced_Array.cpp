#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    if(n%4!=0){
        cout<<"NO"<<"\n";
        // return 0;
    }else{

    vector<int> res;
    cout<<"YES"<<"\n";
    int s1=0,s2=0;
    for(int i=2;i<=n;i+=2){
        s1+=i;
        res.push_back(i);
    }
    for(int i=1;i<n-1;i+=2){
        s2+=i;
        res.push_back(i);
    }
    res.push_back(s1-s2);
    for(auto it:res) cout<<it<<" ";
    cout<<"\n";
    }
 }
 return 0;
}