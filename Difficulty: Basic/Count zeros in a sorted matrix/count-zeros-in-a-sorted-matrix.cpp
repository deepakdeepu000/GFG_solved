//Back-end complete function Template for C++

class Solution {
  public:
    int countZeros(vector<vector<int>> arr) {
        // code here
        int n = arr.size();
        int i = 0, j = n - 1;
        int cnt = 0;
        while(i < n and j >= 0){
            if( arr[i][j] == 0){
                    cnt += j + 1;
                    i++;
            }else{
                j--;
            }
        }
        
        return cnt;
    }
};