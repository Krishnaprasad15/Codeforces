#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n,x,a,b,k;

    cin>>n >>x >>a >>b >>k;
    int temp=n;
    int cnt1=0,cnt2=0;
    if(a>x){
        while(k){
            if(n>0){
                n-=a;
                k--;
                cnt1++;
            }else break;
        }
    }
    int c=0;
    if(n>0) {
        c=(n/b);
        if(c*b==n) cnt1+=c;
        else cnt1+=(c+1);
    }

    c=0;
    c=(temp/x);
    if(c*x==temp) cnt2+=c;
    else cnt2+=(c+1);
    if(cnt1<cnt2)
    cout<<cnt1<<"\n";
    else 
    cout<<cnt2<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}