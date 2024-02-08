#include <bits/stdc++.h> 
using namespace std;
typedef long long ll;

string encryptMessage(const string& message) {
    string res = "";
    for (char c : message) {
        if (isalpha(c)) {
            char shiftedChar = c + 13;
            if ((isupper(c) && shiftedChar > 'Z') || (islower(c) && shiftedChar > 'z')) {
                shiftedChar -= 26;
            }
            res += shiftedChar;
        } else {
            res += c;
        }
    }
    return res;
}   
int main() {
    string s;
    getline(cin, s);
    string res = encryptMessage(s);
    cout << "Encrypted Message: " << res << endl;
    cout << "Decrypted Message: " << s << endl;

    return 0;
}
