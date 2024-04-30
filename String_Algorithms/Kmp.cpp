#include <bits/stdc++.h> 
using namespace std;

// Generating the longest proper prefix/sufix (LPS)
// which helps in finding the string with sufix and prefix as same!! in pattern


// Time complexity : O(n+m) where n -> size of str and m -> size of pattern
// Space complexity: O(m) for generating the LPS

vector<int> generatePrefix(string &pattern){
    int m=pattern.size();
    vector<int> a(m,0);  // a[0]=0
    int i=1,j=0;
    while(i<m){
        if(pattern[i]==pattern[j]){
            a[i]= j+1;
            i++;
            j++;
        }else{
            if(j!=0){
                j=a[j-1];
            }else{
                a[i]=0;
                i++;
                j++;
            }
        }
    }
    return a;
}

bool KMP(string& str,string &pattern,vector<int> &prefix_array){
    int n= str.size(),m=pattern.size();
    int i=0,j=0;
    while(i<n && j<m){
        if(str[i]==pattern[j]){
            i++;
            j++;
        }else{
            if(j!=0){
                j=prefix_array[j-1];
            }else i++;
        }
    }
    return (j==m);
}

int main() {
    string str,pattern;
    cin>>str>>pattern;

    vector<int> prefix_array= generatePrefix(pattern);

    cout<< KMP(str,pattern,prefix_array);

    return 0;
}


// krishnaprasadkatikireddy
// acacabacacabacacac
// 0 0 1 2 3 0 1 2 3 4 5 6 7 8 9 10 11 4


// TestCase
// str= "abcxabcdabcdabcy";
// pattern= "abcdabcy";