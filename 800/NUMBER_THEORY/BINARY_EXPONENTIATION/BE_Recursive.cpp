#include<bits/stdc++.h>
using namespace std;
int solve(int a,int b){
    if(b==0) return 1;
    int res= solve(a,b/2);
    if(b&1) return a*res*res;
    else return res*res;
}
int main(){
    int a,b;
    cin>>a >>b;
    // cout<<solve(a,b);
    int res=1;
    while(b>0){
        if(b&1){
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }
    cout<<res;
    return 0;
}