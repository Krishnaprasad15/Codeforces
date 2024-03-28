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

void solve1(string& s,vector<char>& a,unordered_map<ll,bool>& mp){
    if(s[0]=='0') return;
    if(s.length()==6)return;
    if(s.length()!=0){
        ll num=stoi(s);
        mp[num]=1;
    }
    for(int i=0;i<2;i++){
            s.push_back(a[i]);
            solve1(s,a,mp);
            s.pop_back();
    }
    return;
}

bool checker(ll n){
    while(n!=1){
        if(n%10!=1 || n%10!=0){
            return false;
        }
        n/=10;
    }
    return true;
}

void solve(){
       
}

int main() {
    optimize();
    string str="";
    vector<char> a{'1','0'};
    unordered_map<ll,bool>mp;
    solve1(str,a,mp);
    ll t=1;
    cin>>t;
    while(t--){
        ll n;
    cin>>n;
    if(checker(n)){
        cout<<"YES"<<endl;
        continue;;
    }
    bool f=0;
    while(n!=1){
            bool flag=0;
            if(n==1){
            	f=1;
            	break;;
            }
            for(auto it:mp){
                if(it.first!=1 && n%it.first==0){
                    n/=it.first;
                    flag=1;
                    break;
                }
            }
            if(n==1){
                f=1;
                break;
            }
            if(!flag){
                break;
            }
            }
            if(f) YES;
            else NO;    
    }
    return 0;
}

