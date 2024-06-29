//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    string pattern(vector<vector<int>> &arr) {
        // Code Here
        int n = arr.size();
        int m = arr[0].size();
        bool row = true , col = true;
        int ans;
        for(int i = 0 ; i < n ; i++ ){
            int left = 0, right = m - 1;
            while( left <= right ){
                row = true;
                ans = i;
                if( arr[i][left] != arr[i][right]){
                    row = false;
                    break;
                }
                left += 1;
                right -= 1; 
            }
            
            if(row) break;
            
        }
        
        if(row){
            cout << ans << " ";
            return "R";
        }
        
        for(int i = 0 ; i < m ; i++ ){
            int left = 0, right = n - 1;
            ans = i;
            col = true;
            while( left <= right ){
                if( arr[left][i] != arr[right][i]){
                    col = false;
                    break;
                }
                left += 1;
                right -= 1; 
            }
            if(col) break;
        }
        
        if(col){
            cout << ans << " ";
            return "C";
        }
        
        return "-1";
        
        
        
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends