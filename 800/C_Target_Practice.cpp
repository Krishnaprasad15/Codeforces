#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int a[10][10]={
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };
    int res=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char x;
            cin>>x;
            if(x=='X') res+=a[i][j];
        }
    }
    cout<<res<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}