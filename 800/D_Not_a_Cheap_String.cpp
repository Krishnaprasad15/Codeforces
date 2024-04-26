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
    string s;cin>>s;
        int n;cin>>n;
        int sum = 0;
        string orginal = s;
        for (int i = 0; i < s.length(); i++)
        {
            sum += s[i]-'a'+1;
        }
        sort(s.begin(),s.end());
 
        while (sum>n)
        {
            sum -= (s.back()-'a'+1);
            s.pop_back();
        }
        map<char,int>m;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        string ans = "";
        for (int i = 0; i < orginal.length(); i++)
        {
            if(m[orginal[i]]>0){
                ans += orginal[i];
                m[orginal[i]]--;
            }
        }
        cout<<ans<<endl;

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