#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
int dis(int x1,int x2,int y1,int y2){
    return abs(x1-x2)+abs(y1-y2);
}

void solve(){
    int n,m;
    cin>>n >>m;
    vector<vector<int>> distances(n,vector<int>(m,0));
    vector<pair<int,int>> queries;
    for(int i=1;i<=min(n,2);++i){
        for(int j=1;j<=min(m,2);++j){
            cout<<"? "<<i<<" "<<j<<"\n";
            fflush(stdout);
            int d;
            cin>>d;
            queries.push_back({i,j});
            distances[i-1][j-1]=d;
        }
    }
    int x,y;
    if(distances[0][1]==distances[1][0]){
        x=1;
        y=1;
    }else if(distances[0][1]<distances[1][0]){
        x= queries[0].first;
        y= queries[0].second;
    }
    cout<<"!"<<x<<" "<<y<<"\n";
    fflush(stdout);
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}