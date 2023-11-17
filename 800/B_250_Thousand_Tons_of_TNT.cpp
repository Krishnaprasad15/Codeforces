#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int j = 0; j < n; ++j) {
            cin >> arr[j];
        }
        
        int res = 0;
        vector<int> pre(n);
        pre[0] = arr[0];
        for (int j = 1; j < n; ++j) {
            pre[j] = pre[j - 1] + arr[j];
        }
        
        int i = 1;
        while (i < n) {
            if (n % i != 0) {
                i++;
                continue;
            }
            
            vector<int> num;
            for (int j = 0; j < n; j += i) {
                int val = pre[min(j + i - 1, n - 1)];
                if (j - 1 >= 0) val -= pre[j - 1];
                
                num.push_back(val);
            }
            int val = abs(*max_element(num.begin(), num.end()) - *min_element(num.begin(), num.end()));
            if (res < val) res = val;
            i++;
        }
        
        cout << res << endl;
    }
    
    return 0;
}