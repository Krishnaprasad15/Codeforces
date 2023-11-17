#include <bits/stdc++.h>
using namespace std;

int minOperationsToSort(vector<int>& arr) {
    int n = arr.size();
    int minIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    int res = minIndex;
    for (int i = minIndex; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            res = -1;
            break;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(auto &it:arr) cin>>it;

        int result = minOperationsToSort(arr);
        cout << result << endl;
    }

    return 0;
}
