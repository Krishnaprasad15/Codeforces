#include <bits/stdc++.h> 
using namespace std;
const int prime = 101;


// *********** KNUTH MORRIS PRATT ALGORITHM -> TC- O(n+m) SC- O(m) ***********

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

bool knuth_morris_pratt(string &str,string &pattern){

    vector<int> prefix_array= generatePrefix(pattern);

    return KMP(str,pattern,prefix_array);
}


// *********** RABIN KARP ALGORITHM -> TC- O(n*m) SC- O(1)  ***********

long long createHash(string &pattern,int n){
    long long res=0;
    for(int i=0;i<n;i++){
        res+= (pattern[i]*pow(prime,i));
    }
    return res;
}

long long calculateHash(string &str,int oldIdx,int newIdx,long long oldHash,int m){
    long long newHash= oldHash-str[oldIdx];
    newHash/= prime;
    newHash+=(str[newIdx]*pow(prime,m-1));
    return newHash; 
}

bool isEqual(string &str,int start1,int end1,string& pattern,int start2,int end2){
    if(end1-start1!=end2-start2) return false;

    while(start1<end1 && start2<end2){
        if(str[start1++]!=pattern[start2++]) return false;
    }
    return true;
}

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

// *********** Z ALGORITHM -> TC- O(n+m) SC- O(n+m) ***********

vector<int> calculateZindex(string &str){
    vector<int> res(str.size(),0);
    int left=0,right=0;
    for(int k=1;k<str.size();k++){
        if(k>right){
            right=left=k;
            while(right<str.size() && str[right]==str[right-left]) right++;
            res[k]= right-left;
            right--;
        }else{
            int k1= k-left;
            if(res[k1]<right-k+1){
                res[k]= res[k1];
            }else{
                left= k;
                while(right < str.size() && str[right]==str[right-left]) right++;
                res[k]=right-left;
                right--;
            }
        }
    }
    return res;
}

vector<int> zAlgo(string &str,string &pattern){
    string s;
    for(auto &it:pattern){
        s.push_back(it);
    }
    s.push_back('$');
    for(auto &it:str){
        s.push_back(it);
    }

    vector<int> zIndex= calculateZindex(s);

    vector<int> res;
    for(int i=0;i<zIndex.size();i++){
        if(zIndex[i]==pattern.size()){
            res.push_back(i-pattern.size()-1);
        }
    }
    return res;
}

int main() { 
    string str,pattern;
    cin>>str>>pattern;

    // knuth morris
    bool knuth_morris= knuth_morris_pratt(str,pattern);
    cout<<knuth_morris<<"\n";

    // rabin karp
    int rabin_karp= rabinKarp(str,pattern);
    cout<<rabin_karp<<"\n";
    
    // z algorithm
    vector<int> zAlgorithm = zAlgo(str,pattern);
    for(auto &it:zAlgorithm) cout<<it<<" ";

    return 0;
}