class Solution {
  public:
        int solve(int i, int j, int n, int m,
              string &s1, string &s2,
              vector<vector<int>> &dp) {
    
                if (j == m) return i;        
                if (i == n) return INT_MAX; 
            
                if (dp[i][j] != -1)
                    return dp[i][j];
            
                int res;
                if (s1[i] == s2[j]) {
                    res = solve(i + 1, j + 1, n, m, s1, s2, dp);
                } else {
                    res = solve(i + 1, j, n, m, s1, s2, dp);
                }
            
                return dp[i][j] = res;
    }
    
    string minWindow(string& s1, string& s2) {
    
        int n = s1.size(), m = s2.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
    
        int minLen = INT_MAX;
        int start = -1;
    
        for (int i = 0; i < n; i++) {
            if (s1[i] == s2[0]) {
                int end = solve(i, 0, n, m, s1, s2, dp);
                if (end != INT_MAX && end - i < minLen) {
                    minLen = end - i;
                    start = i;
                }
            }
        }
    
        return start == -1 ? "" : s1.substr(start, minLen);
    }

};
