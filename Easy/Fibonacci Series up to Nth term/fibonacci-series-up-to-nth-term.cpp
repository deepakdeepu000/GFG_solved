//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> Series(int N) {
        // COde here
        vector <long long> v;
        if( N == 0 or N == 1 ){
            v.push_back(0);
            v.push_back(1);
        }
        else{
            v = Series(N-1);
            v.push_back(v[N-1]+v[N-2]);
        }
        return v;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<long long> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends