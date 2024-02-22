#include <string>
#include <iostream>

using namespace std;

bool check1(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < 'A' || s[i] > 'Z')
            return 0;
    }
    return 1;
}

bool check2(string s)
{
    if (s[0] < 'a' || s[0] > 'z')
        return 0;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] < 'A' || s[i] > 'Z')
            return 0;
    }
    return 1;   
}
int main()
{
    string s;
    cin >> s;
    if (check1(s))
    {
        for (char &c: s)
            c = tolower(c);
    }
    else if (check2(s))
    {
        s[0] = toupper(s[0]);
        for (int i = 1; i < s.length(); i++)
            s[i] = tolower(s[i]);
    }
    cout << s << endl;
    return 0;
}