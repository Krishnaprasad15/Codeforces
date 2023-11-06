#include <bits/stdc++.h> 
using namespace std;

class SegTree{
    vector<int> seg;
    public:
    SegTree(int n){
        seg.resize(n*4+1);
    }

    // BUILDING SEGMENT TREE //
    void build(int ind,int low,int high,vector<int>&arr){
        if(low==high){
            seg[ind]=arr[low];
            return;
        }
        int mid= low+(high-low)/2;
        build(2*ind+1,low,mid,arr);
        build(2*ind+2,mid+1,high,arr);
        seg[ind]= min(seg[2*ind+1],seg[2*ind+2]);
    }

    // FOR QUERY BETWEEN A RANGE OF L AND R //
    int query(int ind,int low,int high,int l, int r){
        // OVERLAP
        if(low>=l && high<=r) return seg[ind];
        // NO OVERLAP
        if(r<low || high<l) return INT_MAX;
        // PARTIAL OVERLAP
        int mid= low+(high-low)/2;
        int left= query(2*ind+1,low,mid,l,r);
        int right= query(2*ind+2,mid+1,high,l,r);
        return min(left,right);
    }

    // POINT UPDATE IN SEGMENT TREE // 
    void update(int ind,int low,int high,int i,int val){
        if(low==high){
            seg[ind]=val;
            return;
        }
        int mid= low +(high-low)/2;
        if(i<=mid){
            update(2*ind+1,low,mid,i,val);
        }else update(2*ind+2,mid+1,high,i,val);
        seg[ind]= min(seg[2*ind+1],seg[2*ind+2]);
    }
};

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(auto &it:arr) cin>>it;
    // vector<int> seg(4*n);
    SegTree st(n);
    st.build(0,0,n-1,arr); // build segment tree;

    int q;
    cin>>q;
    while(q--){
        // int l,r;
        // cin>>l >>r;
        // cout<< query(0,0,n-1,l,r,seg)<<"\n";

        // TYPE1 AND TYPE2
        int type;
        cin>>type;
        if(type==1){
            int l,r;
            cin>>l >>r;
            cout<< st.query(0,0,n-1,l,r)<<"\n";
        }else{
            int i,val;
            cin>>i >>val;
            st.update(0,0,n-1,i,val);
            arr[i]=val;
        }
    }
}

