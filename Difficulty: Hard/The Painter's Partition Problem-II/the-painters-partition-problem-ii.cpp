class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        // code here
        int sum = 0, maxo = INT_MIN;
        for(int i = 0 ; i < arr.size(); i++ ){
            sum += arr[i];
            maxo = max(maxo, arr[i]);
        }
        
        int n = arr.size();
        
        int left = maxo, right = sum;
        
        int max_time = INT_MAX;
        
        while(left <= right){
             int mid = left + ( right - left ) / 2;
             
             
             
             int curr_sum = 0, painters = 1;
             bool possible = true;
             for(int i = 0 ; i < n ;i++){
                 
                 if(arr[i] > mid){
                     possible = false;
                     break;
                 }
                 
                 if( curr_sum + arr[i] > mid){
                     painters++;
                     curr_sum = arr[i];
                 }else{
                     curr_sum += arr[i];
                 }
             }
             
             if(painters <= k && possible){
                 max_time = mid;
                 right = mid - 1;
             }else{
                 left = mid + 1;
             }
        }
        
        return max_time;
    }
};