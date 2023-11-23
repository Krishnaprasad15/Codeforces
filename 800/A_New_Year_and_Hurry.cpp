#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    int n,k;
    cin>>n >>k;
    int rem= 240 - k;
    // if(rem==0){
    //     cout<<0;
    //     return 0;
    // }
    int cnt=0;
    for(int i=1;i<=n;i++){
        int t=i*5;
        if(rem-t<0) break;
        else {
            rem-=t;
            cnt++;
        }
    }
    cout<<cnt;
 return 0;
}