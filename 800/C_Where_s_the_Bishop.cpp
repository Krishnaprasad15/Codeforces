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
 
void solve(){
    // vector<vector<char>> a(8,vector<chaar>(8));
    char a[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>a[i][j];
        }
    }
    int flag=false;
    int row=0;
    for(int i=0;i<8;i++){
        int cnt=0;
        for(int j=0;j<8;j++){
            if(a[i][j]=='#') cnt++;
        }
        if(flag && cnt==1){
            row=i;
            break;
        }
        if(cnt==2) flag=true;
    }
    for(int i=0;i<8;i++){
        if(a[row][i]=='#'){
            cout<<row+1<<" "<<i+1<<nl;
            break;
        }
    }
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