#include <bits/stdc++.h>
using namespace std;

int main(){
    int y, k, n;
    cin >> y >> k >> n;
    vector<int> gus;
    for(int x=0; x <= n; x += k){
        if(x-y > 0) gus.push_back(x-y);
    }
    if(gus.empty()) gus.push_back(-1);
    for(int t : gus) cout << t << ' ';
    return 0;
}
