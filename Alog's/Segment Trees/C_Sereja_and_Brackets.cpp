#include <bits/stdc++.h> 
using namespace std;

struct k{
    int open,close,full;
    k(int op,int cl,int fu){
        open=op;
        close=cl;
        full=fu;
    }
    k(){
        open=0;
        close=0;
        full=0;
    }
};
k merge(k left,k right){
    k ans= k(0,0,0);
    ans.full= left.full+ right.full + min(left.open, right.close);
    ans.open= left.open+right.open -min(left.open,right.close);
    ans.close= left.close + right.close - min(left.open,right.close);
    return ans;
}
void build(int ind,int low,int high ,string &s,k seg[]){
    if(low==high){
        seg[ind].open= s[low]=='(';
        seg[ind].close= s[low]==')';
        seg[ind].full= 0;
        return;
    }
    int mid= low+(high-low)/2;
    build(2*ind+1,low,mid,s,seg);
    build(2*ind+2,mid+1,high,s,seg);
    seg[ind]=merge(seg[2*ind+1],seg[2*ind+2]);
}

k query(int ind,int low,int high,int l, int r, k seg[]){
    if(r<low || high<l) return k();
    if(l<=low && high<=r) return seg[ind];
    int mid= low+(high-low)/2;
    k left= query(2*ind+1,low,mid,l,r,seg);
    k right= query(2*ind+2,mid+1,high,l,r,seg);
    return merge(left,right);
}
int main() {
 string s;
 cin>>s;
 int n=s.size();
 k seg[4*n];
 build(0,0,n-1,s,seg);
 int q;
 cin>>q;
 while(q--){
    int l,r;
    cin>>l >>r;
    l--,r--;
    k ans= query(0,0,n-1,l,r,seg);
    cout<<ans.full * 2<<"\n";
 }
 return 0;
}