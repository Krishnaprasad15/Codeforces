#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    freopen ("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,m;
    char a,b;
    cin>>n >>m;
    if(n==m) for(int i=0;i<n;i++) cout<<"GB";
    else{
        a='B',b='G';
        if(n<m) swap(a,b);
        for(int i=0;i<min(n,m);i++) cout<<a<<b;
        for(int i=min(n,m);i<max(n,m);i++) cout<<a;
    }
    return 0;
}