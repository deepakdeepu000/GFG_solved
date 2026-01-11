// class Solution {
//   public:
//         int solve(int i, int j, int n, int m,
//               string &s1, string &s2,
//               vector<vector<int>> &dp) {
    
//                 if (j == m) return i;        
//                 if (i == n) return INT_MAX; 
            
//                 if (dp[i][j] != -1)
//                     return dp[i][j];
            
//                 int res;
//                 if (s1[i] == s2[j]) {
//                     res = solve(i + 1, j + 1, n, m, s1, s2, dp);
//                 } else {
//                     res = solve(i + 1, j, n, m, s1, s2, dp);
//                 }
            
//                 return dp[i][j] = res;
//     }
    
//     string minWindow(string& s1, string& s2) {
    
//         int n = s1.size(), m = s2.size();
//         vector<vector<int>> dp(n, vector<int>(m, -1));

    
//         int minLen = INT_MAX;
//         int start = -1;
    
//         for (int i = 0; i < n; i++) {
//             if (s1[i] == s2[0]) {
//                 int end = solve(i, 0, n, m, s1, s2, dp);
//                 if (end != INT_MAX && end - i < minLen) {
//                     minLen = end - i;
//                     start = i;
//                 }
//             }
//         }
    
//         return start == -1 ? "" : s1.substr(start, minLen);
//     }

// };

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
        
        
        //Recursion DP
        // int n = s1.size(), m = s2.size();
        // vector<vector<int>> dp(n, vector<int>(m, -1));
    
        // int minLen = INT_MAX;
        // int start = -1;
    
        // for (int i = 0; i < n; i++) {
        //     if (s1[i] == s2[0]) {
        //         int end = solve(i, 0, n, m, s1, s2, dp);
        //         if (end != INT_MAX && end - i < minLen) {
        //             minLen = end - i;
        //             start = i;
        //         }
        //     }
        // }
    
        // return start == -1 ? "" : s1.substr(start, minLen);
        
        //Greedy
        // int n = s1.size(), m = s2.size();

        // int minLen = INT_MAX;
        // int start = -1;
    
        // int i = 0;
        // while (i < n) {
        //     int j = 0;
    
        //     
        //     while (i < n) {
        //         if (s1[i] == s2[j]) {
        //             j++;
        //             if (j == m) break;
        //         }
        //         i++;
        //     }
    
        //     if (j != m) break; 
        //     
        //     int end = i;
        //     j = m - 1;
        //     while (i >= 0) {
        //         if (s1[i] == s2[j]) {
        //             j--;
        //             if (j < 0) break;
        //         }
        //         i--;
        //     }
    
        //     if (end - i + 1 < minLen) {
        //         minLen = end - i + 1;
        //         start = i;
        //     }
    
        //     i = i + 1;
        // }
    
        // return start == -1 ? "" : s1.substr(start, minLen);
        
        //iteration dp
        
    int n = s1.size(), m = s2.size();

    vector<vector<int>> dp(n, vector<int>(m, -1));

    // First column initialization
    for (int i = 0; i < n; i++) {
        if (s1[i] == s2[0])
            dp[i][0] = i;
        else if (i > 0)
            dp[i][0] = dp[i - 1][0];
    }

    // Fill DP table
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (s1[i] == s2[j])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    // Find minimum window
    int start = -1;
    int minLen = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (dp[i][m - 1] != -1) {
            int len = i - dp[i][m - 1] + 1;
            if (len < minLen) {
                minLen = len;
                start = dp[i][m - 1];
            }
        }
    }

    return start == -1 ? "" : s1.substr(start, minLen);
    }

};

