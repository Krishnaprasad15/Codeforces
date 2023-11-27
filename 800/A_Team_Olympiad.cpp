#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 vector<int> a(n);
 int k[3]={0};
 vector<int> p,m,s;
 for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){
        k[0]++;
        p.push_back(i+1);
    }else if(a[i]==2){
        k[1]++;
        m.push_back(i+1);
    }else{
        k[2]++;
        s.push_back(i+1);
    }
 }
 int mn= min(k[0],min(k[1],k[2]));
 cout<<mn<<"\n";
 for(int i=0;i<mn;i++){
    cout<<p[i]<<" "<<m[i]<<" "<<s[i];
    cout<<"\n";
 }
 

 return 0;
}