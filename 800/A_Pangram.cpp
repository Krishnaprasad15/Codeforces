#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int n;
 cin>>n;
 string s;
 cin>>s;
 set<int> st;
 for(auto it:s) st.insert(tolower(it));
 st.size()==26? cout<<"YES":cout<<"NO";
 return 0;
}