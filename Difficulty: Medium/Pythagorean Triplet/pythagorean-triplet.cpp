class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code hre
        
        unordered_map<int, bool> mp;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            mp[arr[i] * arr[i]] = true;
            arr[i] = arr[i] * arr[i];
        }
        
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1; j < n;j++){
                if(mp[arr[i] + arr[j]]){
                    return true;
                }
            }
        }
        
        
        return false;
    }
};