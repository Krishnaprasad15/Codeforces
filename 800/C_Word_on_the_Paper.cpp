#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    string res="";
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            char ch;
            cin>>ch;
            if(isalpha(ch)) res+=ch;
        }
    }
    cout<<res<<"\n";
 }
 return 0;
}