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
    int n;
    cin>>n;
    string s;
    cin>>s;

    vi a(n,0),b(n,0);
    set<char> st;

    a[0]=1;
    st.insert(s[0]);
    for(int i=1;i<n;i++){
        if(st.find(s[i])==st.end()){
            a[i]=1+a[i-1];
            st.insert(s[i]);
        }else a[i]=a[i-1];
    }
    st.clear();

    b[n-1]=1;
    st.insert(s[n-1]);
    for(int i=n-2;i>=0;i--){
        if(st.find(s[i])==st.end()){
            b[i]=1+b[i+1];
            st.insert(s[i]);
        }else b[i]=b[i+1];
    }

    int res= 0;
    for(int i=0;i<n-1;i++){
        res= max(res,a[i]+b[i+1]);
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