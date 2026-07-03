class Solution {
  public:
    bool divisibleByK(vector<int>& arr, int k) {
        // code here
        if (arr.size() > k)
			return true;
		
		vector<bool> dp(k);
		
		for (int num : arr) {
			vector<bool> nextDp = dp;
			int rem = num % k;
			if (rem == 0)
				return true;
			nextDp[rem] = true;
			
			for (int i = 0; i < k; i++) {
				if (dp[i]) {
					int nextRem = (i + rem) % k;
					if (nextRem == 0)
						return true;
					nextDp[nextRem] = true;
				}
			}
			dp = nextDp;
		}
		return dp[0];
        
    }
};