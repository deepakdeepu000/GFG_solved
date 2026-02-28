class Solution {
  public:
    vector<int> findClosestPair(vector<int> &arr1, vector<int> &arr2, int x) {
        // code here
        int n = arr1.size(), m = arr2.size();
        int i = 0, j = m - 1;
        int prev_diff = INT_MAX;
        int a = 0, b = 0;
       while(i < n and j >= 0){
          int sum = arr1[i] + arr2[j];
          int diff = sum - x;
            // cout << arr1[i] << " "  << arr2[j] << " = " << sum << endl;
          if(prev_diff > abs(diff)){
            //   cout << diff << endl;
              a = arr1[i];
              b = arr2[j];
              prev_diff = abs(diff);
          }
          
          if(diff > 0){
             j--;
          }else{
              i++;
          }
       }
      
       
       return {a,b};
    }
};