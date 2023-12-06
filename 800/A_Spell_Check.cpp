#include<bits/stdc++.h>
using namespace std;
#define loma ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define int long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define sort_great(v) sort(all(v),greater<>())
int32_t main()
{
    loma;
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s,sorted_name="Timru";
        cin>>s;
        sort(s.begin(),s.end());
        if(s==sorted_name)
            cout<<"YES";
        else    
            cout<<"NO";
        cout<<endl;

    }
    return 0;  
} 