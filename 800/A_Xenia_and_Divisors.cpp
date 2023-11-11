// LUOGU_RID: 134547011
#include<bits/stdc++.h>
using namespace std;
int n,a[8],b,c,d;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int m;
        cin>>m;
        if(m==5||m==7){
            cout<<-1;
            return 0;
        }
        a[m]++;
    }
    if(a[4]>a[1]||a[4]>a[2]){
        cout<<-1;
        return 0;
    }
    b=a[4];
    a[1]-=a[4];
    a[2]-=a[4];
    if(a[3]>a[1]||a[3]>a[6]){
        cout<<-1;
        return 0;
    }
    c=a[3];
    a[1]-=a[3];
    a[6]-=a[3];
    if(a[1]!=a[2]||a[1]!=a[6]||a[2]!=a[6]){
        cout<<-1;
        return 0;
    }
    d=a[1];
    while(b--)cout<<1<<" "<<2<<" "<<4<<"\n";
    while(c--)cout<<1<<" "<<3<<" "<<6<<"\n";
    while(d--)cout<<1<<" "<<2<<" "<<6<<"\n";
}