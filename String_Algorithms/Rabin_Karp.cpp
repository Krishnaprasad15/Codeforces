#include <bits/stdc++.h> 
using namespace std;
const int prime = 101;

// Best and Avg TC : O(n+m)
// Worst Tc: O(n*m)
// Space complexity: O(1)


// For creating the hash value for pattern and string of m size;
// str[0]* prime^0 + str[1]*prime^1 + str[2]*prime^2.... of m size

long long createHash(string &pattern,int n){
    long long res=0;
    for(int i=0;i<n;i++){
        res+= (pattern[i]*pow(prime,i));
    }
    return res;
}

// for calculating hashvalues for different subsequence of string
// to calculate in constant time we subtract the old index val and divide it by prime val and add the next char val
// 1. newHash = oldHash- str[oldIdx];
// 2. newHash/= prime;
// 3. newHash+= (str[newIdx]*pow(prime,m-1));


long long calculateHash(string &str,int oldIdx,int newIdx,long long oldHash,int m){
    long long newHash= oldHash-str[oldIdx];
    newHash/= prime;
    newHash+=(str[newIdx]*pow(prime,m-1));
    return newHash; 
}

// Once the hash value of the current substring and pattern is Equal
// we compare the char fromt there!!

bool isEqual(string &str,int start1,int end1,string& pattern,int start2,int end2){
    if(end1-start1!=end2-start2) return false;

    while(start1<end1 && start2<end2){
        if(str[start1++]!=pattern[start2++]) return false;
    }
    return true;
}

// O(m*n)

int rabinKarp(string &str,string &pattern){
    int n=str.size(),m=pattern.size();

    long long patternHash = createHash(pattern,m);
    long long strHash = createHash(str,m);

    for(int i=0;i<=n-m;i++){
        if(patternHash==strHash && isEqual(str,i,i+m,pattern,0,m)) return i;
        if(i<n-m){
            strHash= calculateHash(str,i,i+m,strHash,m);
        }
    }
    return -1;
}

int main() {
    string str,pattern;
    cin>>str>>pattern;

    cout<<rabinKarp(str,pattern);

    return 0;
}


// Testcase
// abedabc
// abc