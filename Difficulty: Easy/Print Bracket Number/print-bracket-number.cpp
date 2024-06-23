//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        
        int cnt = 0;
        vector<int> res;
        vector<int> stack;
        
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(') {
                cnt++;
                stack.push_back(cnt);
                res.push_back(cnt);
            } else if (str[i] == ')') {
                res.push_back(stack.back()); 
                stack.pop_back(); 
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

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends