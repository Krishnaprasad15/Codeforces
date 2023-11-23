#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 long long n,m;
 cin>>n >>m;
 char a[n][m];
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        a[i][j]='.';
    }
 }
 bool flag=true;
 for(int i=0;i<n;i++){
    if(i%2==0){
        for(int j=0;j<m;j++) a[i][j]='#';
    }else {
        if(flag) a[i][m-1]='#';
        else a[i][0]='#';
        flag=!flag;
    }
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j];
    }
    cout<<endl;
 }
 return 0;
}