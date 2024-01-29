//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    // string Stringifier(string &s,int idx){
    //     int times = 0;
    //     string word = "";
        
    //     while(idx < s.length()) {
    //         if(s[idx] >= '0' && s[idx] <= '9')
    //             times = times * 10 + (s[idx] - '0');
    //         else if(s[idx] == '[') {
    //             idx++;
    //             string temp = Stringifier(s, idx);
    //             while(times--) word += temp;
    //             times = 0;
    //         }
    //         else if(s[idx] == ']')
    //             return word;
    //         else
    //             word += s[idx];
    //         idx++;
    //     }
    //     return word;
    // }
    string decodedString(string s){
        stack<int> counts;
        stack<string> strings;
        string currentString;
        int count = 0;
    
        for (char c : s) {
            if (isdigit(c)) {
                count = count * 10 + (c - '0');
            } else if (c == '[') {
                counts.push(count);
                strings.push(currentString);
                currentString = "";
                count = 0;
            } else if (c == ']') {
                int repeatCount = counts.top();
                counts.pop();
                string prevString = strings.top();
                strings.pop();
                for (int i = 0; i < repeatCount; ++i) {
                    prevString += currentString;
                }
                currentString = prevString;
            } else {
                currentString += c;
            }
        }
    
        return currentString;
        
    
}
       
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends