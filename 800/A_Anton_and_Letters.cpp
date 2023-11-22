#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 
 set<int> st;
 while(true){
    char c;
    cin>>c;
    if(c=='}') break;
    if(isalpha(c)) st.insert(c);
 }
 cout<<st.size();
 return 0;
}