#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
string Solve(long long ab,long long ba,string s){
    ab=ba=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='a' && s[i+1]=='b') ab++;
        else if(s[i]=='b' && s[i+1]=='a') ba++;
    }
    if(ab==ba) return s;
    else if(ab>ba){
        long long t= s.find('a');
        s[t]='b';
        return Solve(ab,ba,s);
    }else{
        long long t= s.find('b');
        s[t]='a';
        return Solve(ab,ba,s);
    }
}
void solve(){
    string s;
    cin>>s;
    cout<<Solve(0,0,s)<<"\n";
}
int main() {
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}