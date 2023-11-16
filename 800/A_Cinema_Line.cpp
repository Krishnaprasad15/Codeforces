#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 string res="YES";
 int p=0,q=0;
 for(int i=0;i<n;i++){
    int r;
    cin>>r;
    if(r==25){
        p++;
    }else if(r==50){
        q++;
        if(p<1){
            res="NO";
            break;
        }else p--;
    }
    else if(r==100){
        if(p>0 && q>0){
            p--;
            q--;
        }else if(p>=3) p-=3;
        else {
            res="NO";
            break;
        }
    }
 }
 cout<<res;
 return 0;
}