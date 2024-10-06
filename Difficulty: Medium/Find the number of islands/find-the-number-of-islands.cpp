//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void find_islands(int row , int col , vector<vector<char>>& grid ){

        if(row > grid.size()-1 || col > grid[0].size() - 1 || row < 0 || col < 0|| grid[row][col] == '0'){
            return;
        }

        grid[row][col] = '0';

        find_islands( row+1 , col , grid);
        find_islands( row+1 , col+1 , grid);
        find_islands( row+1 , col-1 , grid);
        find_islands(row-1, col , grid);
        find_islands( row-1 , col+1 , grid);
        find_islands( row-1 , col-1 , grid);
        find_islands(row , col+1 , grid);
        find_islands(row , col-1, grid);

    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int island_cnt = 0;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                
                if(grid[i][j] == '1'){
                    find_islands( i , j , grid);
                    island_cnt++;
                    
                }
                
            }
        }
        
        return island_cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends