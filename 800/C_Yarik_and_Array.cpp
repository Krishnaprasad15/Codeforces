// #include <bits/stdc++.h> 
// using namespace std;
// typedef long long ll;
// void solve(){
//     ll n;
//     cin>>n;
//     vector<ll> a(n);
//     for(auto &it:a) cin>>it;
//     ll i=0,j=0,sum=0;
//     ll res=INT_MIN;
//     while(j<n){
//         ll prev= a[j];
//         sum+=a[j];
//         res=max(res,sum);
//         j++;
//         if((prev%2==0 && a[j]%2==0) || (prev%2==1 && a[j]%2==1)){
//             while(i<=j){
//             sum-=a[i];
//             i++;
//             }
//         }
//     }
//     cout<<sum<<"\n";
// }
// int main() {
//  int t;
//  cin>>t;
//  while(t--) solve();
//  return 0;
// }

#include <vector>
#include <iostream>
#include <climits>
#define ll long long

using namespace std;

ll maxSubArr(vector<ll>&arr, int left, int right){
    ll max = LLONG_MIN, max_ending = 0;
    for(int i=left; i<=right; i++){
        max_ending = max_ending + arr[i]; 
        if(max < max_ending) {
            max = max_ending;
        }
        if(max_ending < 0){
            max_ending = 0;
        }
    }
    return max;
}

void solve(){
    int n;
    cin>>n;
    vector<ll> vec(n);
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int previous = 0;
    ll answer = LLONG_MIN;
    for(int i=1; i<n; i++){
        if((abs(vec[i])%2) == (abs(vec[i-1])%2)){
            answer = max(answer, maxSubArr(vec, previous, i-1));
            previous = i;
        }
    }
    answer = max(answer, maxSubArr(vec, previous, n-1));
    cout<< answer << endl;
}

int main(){
    int num;
    cin>>num;
    while(num--){
        solve();
    }
    return 0;
}
