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

using namespace std;

void solve() {
    ll n,m,k;
    cin>> n>>m >>k;
    vl a(n),b(m);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    unordered_map<ll, ll> freq;
    for (ll i = 0; i < m; ++i) freq[b[i]]++;

    ll res = 0,matched = 0,j = 0;
    for (int i = 0; i < n; ++i) {
        if (freq.find(a[i]) != freq.end()) {
            freq[a[i]]--;
            if (freq[a[i]] >= 0)
                matched++;
        }
        if (i - j + 1 > m) {
            if (freq.find(a[j]) != freq.end()) {
                freq[a[j]]++;
                if (freq[a[j]] > 0)
                    matched--;
            }
            j++;
        }
        if (i - j + 1 == m && matched >= k)
            res++;
    }
    cout<<res<<nl;
}

int main() {
    optimize();
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
