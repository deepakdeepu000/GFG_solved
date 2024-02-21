//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    bool Slices(int i, int start, string &s, vector<string> &dictionary, vector<int> &memo) {
        if (i == s.size()) {
            return true;
        }
        
        if (memo[i] != -1) {
            return memo[i];
        }
        
        string word = "";
        for (int j = i; j < s.size(); ++j) {
            word += s[j];
            if (find(dictionary.begin(),dictionary.end(),word) != dictionary.end() && Slices(j + 1, j + 1, s, dictionary, memo)) {
                return memo[i] = 1;
            }
        }
        
        return memo[i] = 0;
    }
    int wordBreak(int n, string s, vector<string> &dictionary) {
        //code here
        vector<int> memo(s.size()+1,-1);
        return Slices( 0 , 0, s , dictionary, memo)? 1 : 0;;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dictionary;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dictionary.push_back(S);
        }
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.wordBreak(n, s, dictionary)<<"\n";
    }
}

// } Driver Code Ends