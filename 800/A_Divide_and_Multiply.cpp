#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        ll sum = 0;
        ll cnt=0;
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            while(arr[i]%2==0){
                arr[i]/=2;
                cnt++;
            }
        }
        
     sort(arr.begin(), arr.end());
       while(cnt--){
            arr[n-1]*=2;
        }
        for (ll i = 0; i < n; i++) {
            sum += arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}