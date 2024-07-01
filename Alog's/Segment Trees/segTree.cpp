#include <bits/stdc++.h>
using namespace std;

void buildSegmentTree(int i,int l,int h,vector<int>&a, vector<int>& res){
  if(l==h){
    res[i]= a[l];
    return;
  }
  int m= l+(h-l)/2;
  buildSegmentTree(2*i+1,l,m,a,res);
  buildSegmentTree(2*i+2,m+1,h,a,res);
  res[i]= res[2*i+1]+ res[2*i+2];
}

void updateSegmentTree(int idx,int val,int i,int l ,int h,vector<int>&res){
  if(l==h){
    res[i]= val;
    return;
  }
  int m= l+(h-l)/2;

  if(idx<=m) updateSegmentTree(idx,val,2*i+1,l,m,res);
  else updateSegmentTree(idx,val,2*i+2,m+1,h,res);

  res[i]= res[2*i+1] + res[2*i+2];
}

int queryOnSegmentTree(int s,int e,int i,int l,int h,vector<int>&res){

    if(l>e || h<s) return 0;
    if(l>=s && h<=e) return res[i];
    // else {
      int m= l+(h-l)/2;

      return queryOnSegmentTree(s,e,2*i+1,l,m,res)+ queryOnSegmentTree(s,e,2*i+2,m+1,h,res);
    // }


}

int main() {
  // cout << "Hello world!" << endl;

  int n;
  cin>>n;
  vector<int> a(n),res(4*n);
  for(auto &it:a) cin>>it;

  buildSegmentTree(0,0,n-1,a,res);

  for(auto &it:res) cout<<it<<" ";
  cout<<endl;

  updateSegmentTree(2,6,0,0,n-1,res);
  for(auto &it:res) cout<<it<<" ";
  cout<<endl;

  int sol= queryOnSegmentTree(2,4,0,0,n-1,res);
  cout<<sol;
  return 0;
}