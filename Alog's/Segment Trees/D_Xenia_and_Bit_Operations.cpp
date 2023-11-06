#include <bits/stdc++.h> 
using namespace std;
 
void build(int ind,int low,int high ,vector<int>&arr,vector<int>&seg,int flag){
    if(low==high){
        seg[ind]=arr[low];
        return;
    }
    int mid= low+(high-low)/2;
    build(2*ind+1,low,mid,arr,seg,!flag);
    build(2*ind+2,mid+1,high,arr,seg,!flag);
    if(flag) seg[ind]= seg[2*ind+1] | seg[2*ind+2];
    else seg[ind]= seg[2*ind+1]^seg[2*ind+2];
}

void update(int ind,int low,int high, int i,int val, vector<int>&seg,int flag){
    if(low==high){
        seg[ind]=val;
        return;
    }
    int mid= low+(high-low)/2;
    if(i<=mid) update(2*ind+1,low,mid,i,val,seg,!flag);
    else update(2*ind+2,mid+1,high,i,val,seg,!flag);
    if(flag) seg[ind]= seg[2*ind+1] | seg[2*ind+2];
    else seg[ind]= seg[2*ind+1]^seg[2*ind+2];
}
int main() {
    int n,q;
    cin>>n >>q;
    int size= pow(2,n);
    vector<int> arr(size),seg(4*size);
    for(auto &it:arr) cin>>it;

    if(n%2==0) build(0,0,size-1,arr,seg,0);
    else build(0,0,size-1,arr,seg,1);

    while(q--){
        int i,val;
        cin>>i >>val;
        i--;

        if(n%2==0) update(0,0,size-1,i,val,seg,0);
        else update(0,0,size-1,i,val,seg,1);

        cout<<seg[0]<<"\n";
    }
    return 0;
}