// User function Template for C++

class Solution {
  public:
    int sumOfRowCol(int n, int m, vector<vector<int>> arr) {
        // code here
        
        for(int i = 0 ; i < n ; i++){
            int sum1 = 0 , sum2 = 0;
            for(int j = 0 ; j < m ; j++){
                sum1 += arr[i][j];
            }
            
            for(int j = 0 ; j < min(n,m); j++){
                sum2 += arr[j][i];
            }
            
            if(sum1 != sum2){
                return 0;
            }
        }
        
        return 1;
    }
};