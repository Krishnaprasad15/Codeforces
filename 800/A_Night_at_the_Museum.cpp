#include <bits/stdc++.h> 
using namespace std;
 
int main() {
 string ch ;
    cin >> ch ;
    int num,i,n ;
    if(abs('a'-ch[0])>13)
    {
        num=26-abs('a'-ch[0]);
    }
    else
    {
        num=abs('a'-ch[0]);
    }
    for(i=0;i<ch.size()-1;i++)
    {
        if(abs(ch[i]-ch[i+1])>13)
        {
            n = 26-abs(ch[i]-ch[i+1]);
        }
        else
        {
            n=abs(ch[i]-ch[i+1]);
        }
        num+= n;
    }
    cout << num ;
 return 0;
}