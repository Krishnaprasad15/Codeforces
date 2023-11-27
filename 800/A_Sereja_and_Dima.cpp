#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 vector<int> a(n);
 for(auto &it:a) cin>>it;

 int c1=0,c2=0,i=0,j=n-1;
 bool flag=true;
 while(i<=j){
    if(a[i]>=a[j]){
        if(flag){
            c1+=a[i];
            i++;
        }else {
            c2+=a[i];
            i++;
        }
    }else{
        if(flag){
            c1+=a[j];
            j--;
        }else {
            c2+=a[j];
            j--;
        }
    }
    flag=!flag;
 }
 cout<<c1<<" "<<c2;
 return 0;
}