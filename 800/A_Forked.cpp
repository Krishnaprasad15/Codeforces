#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
void solve(){
    int a,b,xk,yk,xq,yq;
    cin>>a>>b;
    cin>>xk>>yk;
    cin>>xq>>yq;

    vector<pair<int,int>> dir= {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};

    int sum=0;
    set<pair<int,int>> st1,st2;

    for(auto it:dir){
        int x= xk+ it.first;
        int y= yk+ it.second;

        st1.insert({x,y});

        x= xq + it.first;
        y= yq + it.second;

        st2.insert({x,y});
    }

    for(auto it:st1){
        if(st2.find(it)!=st2.end()) sum++;
    }
    cout<<sum<<nl;
}

int main() {
    optimize();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}