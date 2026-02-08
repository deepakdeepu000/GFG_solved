class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int n = arr.size();
        int pro1 = 1, pro2 = 1;
        int max_pro = INT_MIN;
        for(int i = 0 ;i < n ; i++){
            if(pro1 == 0) pro1 = 1;
            if(pro2 == 0) pro2 = 1;
            
            pro1 *= arr[i];
            
            pro2 *= arr[n - i - 1];
            
            
            max_pro = max(max_pro, max(pro1, pro2));
            
        }
        
        return max_pro;
    }
};