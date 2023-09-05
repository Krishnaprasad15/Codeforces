#include <bits/stdc++.h> 
using namespace std;

void solve(int ind,vector<int>&arr,vector<int> &res,vector<vector<int>>&ans){
    if(ind>=arr.size()){
        ans.push_back(res);
        return ;
    }
    res.push_back(arr[ind]);
    solve(ind+1,arr,res,ans);
    res.pop_back();
    solve(ind+1,arr,res,ans);
}
vector<vector<int>> subSet(vector<int>&arr){
    vector<vector<int>> ans;
    vector<int> res;
    solve(0,arr,res,ans);
    return ans;
}
int main() {
 int n;
 cin>>n;
 vector<int> arr(n);
 for(auto &it:arr) cin>>it;
 vector<vector<int>> res= subSet(arr);
 for(auto it:res){
    for(auto its:it){
        cout<<its<<" ";
    }
    cout<<endl;
 }
 return 0;
}