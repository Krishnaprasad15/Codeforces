#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin>>n ;
    double x,sum=0;
    for(int i=0;i<n;i++){
        cin>>x;
        sum+=x;
    }
    cout<<sum<<"\n";
    cout<<sum*0.375;
}