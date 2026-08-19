class Solution {
  public:
  
  long long countRangeTriplets(vector<int> & arr, int target){
      
      int n = arr.size();
      
      long long cnt = 0;
      
      for(int i = 0; i < n - 2; i++){
          
          int left = i + 1;
          int right = n - 1;
          
          while(left < right){
              int sum = (long long)(arr[i] + arr[left] + arr[right]);
              
              if(sum <= target){
                  cnt += right - left;
                  
                  left++;
              }else{
                  right--;
              }
          }
      }
      
      return cnt;
  }
  int countTriplets(vector<int> &arr, int l, int r) {
        // code here
        sort(arr.begin(), arr.end());
        
        long long res = countRangeTriplets(arr, r) - countRangeTriplets(arr, l - 1);
        
        return (int)res;
        
    }
};