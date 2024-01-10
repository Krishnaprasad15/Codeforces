#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,h,m;
           cin >> n >> h >> m;
           int p = (h*60)+m;
        vector <int> minutes(n);
        for(int i =0;i<n;i++)
        {
            int x,y;
            cin >> x >> y;
            int q = (x*60)+y;
            if(q<p)
                minutes.push_back(q+(24*60));
            else
                minutes.push_back(q);
        }
        sort(minutes.begin(),minutes.end());
        int x = *(lower_bound(minutes.begin(),minutes.end(),p));
       printf("%d %d\n",(x-p)/60,(x-p)%60);
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}



