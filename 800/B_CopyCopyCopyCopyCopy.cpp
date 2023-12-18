#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 int t;
 cin>>t;
 while(t--){
    int n,x;
    cin>>n;
    set<int> st;
    while(n--){
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<"\n";
 }
 return 0;
}