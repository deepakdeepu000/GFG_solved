class Solution {
  public:
    vector<int> diagView(vector<vector<int>> a) {
        // code here
           vector<int> ans;
            int row = 0, col = 0, cnt = 0;
            for(int i = 0 ; i < a.size(); i++){
                for(int j =0 ; j < a[0].size(); j++){
                    ans.push_back(a[row][col]);
                    row++;
                    col--;
                    if(col < 0 || row >= a.size()){
                        cnt++;
                        col = min(cnt, int(a.size() - 1));
                        row = cnt - col;
                    }
                }
            }
            return ans;
    }
};