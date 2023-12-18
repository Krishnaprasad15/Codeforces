#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define pb push_back ;
int main() {
 int t;
 cin>>t;
 while(t--){
    ll a,b,c;
 
        cin >> a >> b >> c;
 
        vector<ll> arr;
        arr.push_back(a);
        arr.push_back(b);
        arr.push_back(c);
 
        ll maxi = *max_element(arr.begin(),arr.end());
        int count = 0;
        
        for(int i = 0; i < 3; i++){
            if(arr[i] == maxi){
                count++;
            }
        }
 
        if(count == 3){
            for(int i = 0; i < 3; i++){
                arr[i] = 1;
            }
        }
        else if(count == 2){
            for(int i = 0; i < 3; i++){
                if(arr[i] == maxi){
                    arr[i] = 1;
                }
                else{
                    arr[i] = (maxi + 1) - arr[i];
                }
            }
        }
        else if(count == 1){
            for(int i = 0; i < 3; i++){
                if(arr[i] == maxi){
                    arr[i] = 0;
                }
                else{
                    arr[i] = maxi + 1 - arr[i];
                }
            }
        }
 
        for(int i = 0; i < 3; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
 }
}