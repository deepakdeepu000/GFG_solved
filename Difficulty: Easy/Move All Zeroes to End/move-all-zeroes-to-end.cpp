class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int lastIndex = -1, n = arr.size();
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != 0 and lastIndex != -1){
                swap(arr[lastIndex], arr[i]);
                lastIndex = lastIndex + 1;
            }
            
            if(arr[i] == 0 and lastIndex == -1){
                lastIndex = i;
            }
        }
    }
};