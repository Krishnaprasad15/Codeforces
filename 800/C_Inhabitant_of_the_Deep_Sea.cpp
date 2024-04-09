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
    ll n,k;
    cin>>n>>k;

    deque<ll> q;
    for(int i=0,x;i<n;i++){
        cin>>x;
        q.push_back(x);
    }
    int f=1,res=0;
    while(k>0 && q.size()){
        if(q.size()==1){
            if(q.front()<=k) res++;
            break;
        }

        int x= q.front();
        int y= q.back();
        q.pop_back();
        q.pop_front();

        int z= min(x,y);

        if(f==1){
            if(z==x){
                if(k<2*z-1) break;
                k-= 2*z-1;
                y-= z-1;
                q.push_back(y);
                f=0;
                res++;
            }else{
                if(k<2*z) break;
                k-= 2*z;
                x-=z;
                q.push_front(x);
                res++;
            }
        }else{
            if(z==y){
                if(k<2*z-1) break;
                k-=2*z-1;
                x-= z-1;
                f=1;
                q.push_front(x);
                res++;
            }else{
                if(k<2*z) break;
                k-= 2*z;
                y-= z;
                q.push_back(y);
                res++;
            }
        }
    }
    cout<<res<<nl;

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