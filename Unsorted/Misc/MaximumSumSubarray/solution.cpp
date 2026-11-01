class Solution {
  public:
    int maximumSubarray(vector<int>& arr) {
        // code here
        int n = arr.size(), ans = 0;
                vector<int> kadane(n, 0);
                for(int i = 0, x = 0; i < n; i++) {
                    if(x < 0) x = 0;
                    x += arr[i];
                    kadane[i] = x;
                }
                for(int i = n - 1, x = 0; i >= 0; i--) {
                    ans = max(ans, arr[i] * arr[i] + max(0, ((i - 1 >= 0) ? kadane[i - 1] : 0)) + max(0, x));
                    if(x < 0) x = 0;
                    x += arr[i];
                }
                return ans;
            
    }
};
