#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    char a[3][3];
    int row=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
            if(a[i][j]=='?') row=i;
        }
    }
    bool aa=true,b=true,c=true;
    for(int j=0;j<3;j++){
        if(a[row][j]=='A'){
            aa=false;
        }else if(a[row][j]=='B'){
            b=false;
        }else if(a[row][j]=='C'){
            c=false;
        }
    }
    if(aa) cout<<'A';
    else if(b) cout<<'B';
    else if(c) cout<<'C';
    cout<<"\n";

 }
 return 0;
}