#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string res="";

        for(int i=0;i<n;i++){
            if((s[i]=='b' || s[i]=='c' || s[i]=='d') && (s[i+1]=='a' || s[i+1]=='e') && (s[i+2]=='b' || s[i+2]=='c' || s[i+2]=='d')
            && (s[i+3]=='e' || s[i+3]=='a')){
                res+=s[i];
                res+=s[i+1];
                res+='.';
                i+=1;
            }else{
                res+=s[i];
                res+=s[i+1];
                res+=s[i+2];
                res+='.';
                i+=2;
            }
        }
        int nn= res.size();
        // cout<<res;
        // cout<<"\n";
        if(res[nn-1]=='.' && res[nn-2]==' '){
            cout<<res.substr(0,nn-3);
        }else cout<<res.substr(0,nn-1);
        cout<<"\n";
        // cout<<res.substr(0,nn-2)<<"\n";
        // cout<<res<<"\n";
    }
 return 0;
}