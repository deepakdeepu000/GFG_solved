class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        int upperSum = 0, lowerSum = 0;
        for(int i = 0 ; i < n ; i++){
            for (int j = i ; j < m ; j++){
                upperSum += mat[i][j];
            }
            
            for(int j = 0; j <= i ; j++){
                lowerSum += mat[i][j];
            }
        }
        
        return {upperSum, lowerSum};
    }
};
