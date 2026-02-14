class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(), a.end());
        int i = 0, n = a.size();
        int min_diff = a[m - 1] - a[0];
        for(int i = 1;i <= n - m ; i++){
            min_diff =  min(min_diff, a[i + m - 1] - a[i]);
        }
        return min_diff;
    }
};