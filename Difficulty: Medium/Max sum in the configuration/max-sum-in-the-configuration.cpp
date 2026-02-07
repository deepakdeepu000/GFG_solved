class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int sum = 0, arr_sum = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            sum += i * arr[i];
            arr_sum += arr[i];
        }
    
        int max_sum = sum;
        for(int i = 0 ;i < n - 1;i++){
            sum = sum - arr_sum + (n * arr[i]);
            
            if (sum > max_sum){
                max_sum = sum;
            }
        }
        
        return max_sum;
        
        
    }
};