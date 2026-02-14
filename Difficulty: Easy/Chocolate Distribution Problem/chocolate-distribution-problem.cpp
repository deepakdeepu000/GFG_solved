class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(), a.end());
        int i = 0, j = a.size() - 1;
        int min_diff = a[m - 1] - a[0];
        for(int i = m ;i < a.size() ; i++){
            min_diff =  min(min_diff, a[i] - a[i - m + 1] );
        }
        return min_diff;
    }
};