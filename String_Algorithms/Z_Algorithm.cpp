#include <bits/stdc++.h> 
using namespace std;


// Time Complexity - O(n+m)
// Space complexity- O(n+m)

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

    vector<int> res= zAlgo(str,pattern);
    for(auto &it:res){
        cout<<it<<" ";
    }

    return 0;
}


// TestCase
// abceeabc
// abc
// o/p : 0 5