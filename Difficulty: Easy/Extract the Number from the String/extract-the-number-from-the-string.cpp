//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        int i = 0;
        long long res = -1;
        bool flag = true;
        while( i < sentence.size()){
            if( isdigit(sentence[i])){
                long long num = 0;
                flag = true;
                while(i < sentence.size() && isdigit(sentence[i])){
                    int digit = sentence[i] - '0';
                    if(digit == 9){
                        flag = false;
                    }
                    num = (num * 10 ) + digit;
                    i++;
                }
                if(flag){
                   res = max(res , num);
                }
            }else{
                i++;
            }
        }
        
        
        return res;
        
        
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends