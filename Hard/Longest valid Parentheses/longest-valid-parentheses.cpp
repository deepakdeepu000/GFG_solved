//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string s){
      int n = (int)s.size(), o, c, ans = 0;

        for (int i = 0; i < n - 1; ++i) {
            
            if (ans >= n - i + 1)
                break;
            
            o = 0, c = 0;
            if (s[i] == '(')
                o= 1;
            else
                continue;

            for (int j = i + 1; j < n; ++j) {
                if (s[j] == '(')
                    o++;
                else
                    c++;
                if (o == c)
                    ans = max(ans, o + c);
                else if (o < c)
                    break;
            }
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends