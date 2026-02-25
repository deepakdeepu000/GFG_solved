class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) {
        // Code here
        unordered_map<int, int> mp;
        int p_s = 0;
        int n = arr.size();
        int res = 0;
        int largest_count = 0, smallest_count = 0;
        mp[0] = -1;
        for(int i = 0 ;i < n ; i++){
            if(arr[i] > k) largest_count++;
            else smallest_count++;
            
            p_s = largest_count - smallest_count;
            
            
            if(mp.find(p_s - 1) != mp.end() and p_s - 1 < 0){
            
                res = max(res, i - mp[p_s - 1]);
            }else{
                if((p_s - 1) >= 0){
                    res = max(res, i + 1);
                } 
            }
            
            if(mp.find(p_s) == mp.end()){
                mp[p_s] = i;
            }
        }
        
        return res;
    }
};