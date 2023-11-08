#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int k,frq[26]={0};
    cin>>k;
    string s,out="";
    cin>>s;

    for(int i=0;i<s.size();i++)
        frq[s[i]-'a']++;

    for(int i=0;i<26;i++){
        if(frq[i]%k!=0){
            cout<<-1<<endl;
            return 0;
        }
        for(int j=0;j<frq[i]/k;j++)
            out+=('a'+i);
    }
    for(int i=0;i<k;i++)
        cout<<out;
    cout<<endl;
    return 0;
}
