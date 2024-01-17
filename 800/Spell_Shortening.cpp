#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<char> a(26,0);
    for(int i=0;i<n;i++){
        a[s[i]]=(s[i]-'a');
    }

    string res="";
    int i=0;
    bool flag=false;
    for(i=0;i<n-1;i++){
        if(a[s[i]]>a[s[i+1]]){
            flag=true;
            break;
        }else res+=s[i];
    }
    // if(flag){
        i+=1;
        for(int j=i;j<n;j++){
            res+=s[j];
        }
    // }
    cout<<res<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}