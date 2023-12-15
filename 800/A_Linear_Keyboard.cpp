#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

int main()
{
  int t, n;
  cin >> t;
  while (t--)
  {
    map<char, int> map;
    string s, x;
    cin >> x;

    for (int i = 0; i < 26; i++)
    {
      map[x[i]] = i;
    }

    cin >> s;
    long long ans = 0;
    int n = s.length();

    for (int i = 1; i < n; i++)
    {
      ans += abs(map[s[i]] - map[s[i - 1]]);
    }
    
    cout << ans << endl;
  }
}
 		 					 	 	  	   	     	  		