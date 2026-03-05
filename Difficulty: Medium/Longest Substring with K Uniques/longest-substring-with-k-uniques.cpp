class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n = s.size();
        unordered_map<int, int> mp;
        int j = 0, maxi = -1;
        for(int i = 0 ;i < n ; i++){
            mp[s[i]]++;
            if(mp.size() > k){
                mp[s[j]]--;
                if(mp[s[j]] == 0){
                    mp.erase(s[j]);
                }
                j++;
            }
            
            if(mp.size() == k) maxi = max(maxi, i - j + 1);
        }
        
        return maxi;
    }
};