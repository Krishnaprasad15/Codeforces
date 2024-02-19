#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n;
 cin>>n;
 vector<int> arr(n);
 for(auto &it:arr) cin>>it;

 for(int i=0;i<n;i++){
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
 }
 for(auto it:arr){
    cout<<it<<" ";
 }
 return 0;
}