#include <bits/stdc++.h> 
using namespace std;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef long long ll;
#define nl "\n"
#define all(x) (x).begin(), (x).end()
#define YES cout << "YES"<<nl
#define NO cout << "NO"<<nl
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
long long solve(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        
        vector<int> row(n,0),col(n,0);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                row[i]+= grid[i][j];
                col[j]+= grid[j][i];
            }
        }
        
        long long res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    res+= ((row[i]-1)*(col[j]-1));
                }
            }
        }
        return res;
    }
int main() {
    optimize();
    int t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n >>m;
        vector<vector<int>> grid(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
            }
        }
        cout<<solve(grid);
    }
    return 0;
}