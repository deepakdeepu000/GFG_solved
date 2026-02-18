class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        unordered_set<int> st(arr.begin(), arr.end());
        vector<int> vec;
        for(int i = low ; i <= high ; i++ ){
            if(!st.count(i)){
                vec.push_back(i);
            }
        }
        
        return vec;
    }
};