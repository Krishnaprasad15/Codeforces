#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
#define pi pair<int,int>
#define s2 second
#define f1 first
#define pb push_back
#define si stack<int>
#define qi queue<int>
#define dqi deque<int>
#define mi unordered<int,int>
#define vvi vector<vector<int>>
#define vi vector<int>
#define vl vector<long long>
#define test_case int t; cin >> t; while (t--)

void show(vector<int> &nums)
{
    for(auto x:nums)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
void read(vector<int> &nums)
{
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
}

void sahi(bool ans) {
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

void solve(vi &vec,int &n)
{
    vi arr=vec;

    int sin=-1;
    int ein;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            sin=i;
            break;
        }
    }

    if(sin==-1)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        int i=sin;
        while(i<n)
        {
            if(i+1<n and arr[i]>=arr[i+1])
            {
                i++;
            }
            else
            {
                ein=i;
                break;
            }
        }

        reverse(arr.begin()+sin,arr.begin()+ein+1);
        if(is_sorted(arr.begin(),arr.end()))
        {
            cout<<"yes"<<endl;
            cout<<sin+1<<" "<<ein+1<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi arr(n);
    read(arr);
    solve(arr,n);
    return 0;
}