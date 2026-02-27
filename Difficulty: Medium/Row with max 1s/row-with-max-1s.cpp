// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int maxi = 0, idx = -1;
        int n = arr.size();
        int m = arr[0].size();
        for(int i = 0 ; i < n ; i++){
            int cnt = 0;
            for(int j = m - 1 ; j >= 0; j--){
                if(arr[i][j] != 0) cnt++;
                else break;
            }
            if(cnt > maxi){
                maxi = cnt;
                idx = i;
            }
        }
        
        return idx;
    }
};