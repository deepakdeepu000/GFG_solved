class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n = arr.size();
        int maxi = 0;
        unordered_map<int, int> um;
        int i = 0, j = 0;
        um[arr[0]]++;
        while(i < n){
            if(um.size() <= 2){
                maxi = max(maxi, i - j + 1);
                i++;
                if(i < n) um[arr[i]]++;
            }else{
                um[arr[j]]--;
                if(um[arr[j]] == 0) um.erase(arr[j]);
                j++;
                
            }
        }
        
        return maxi;
    }
};