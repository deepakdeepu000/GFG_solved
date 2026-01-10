class Solution {
  public:
    int countSubstr(string& s, int k) {
        // // code here
        
        // return solve(s,k) - solve(s, k-1);
        vector<int> freq1(26, 0), freq2(26, 0);
        int cnt1 = 0, cnt2 = 0;
        int left1 = 0, left2 = 0;
        int ans = 0;
    
        for (int right = 0; right < s.size(); right++) {
    
            if (freq1[s[right] - 'a']++ == 0)
                cnt1++;
    
            if (freq2[s[right] - 'a']++ == 0)
                cnt2++;
    
            while (cnt1 > k) {
                if (--freq1[s[left1] - 'a'] == 0)
                    cnt1--;
                left1++;
            }
    
            while (cnt2 > k - 1) {
                if (--freq2[s[left2] - 'a'] == 0)
                    cnt2--;
                left2++;
            }
    
            // substrings ending at 'right' with exactly k distinct
            ans += (left2 - left1);
        }
    
        return ans;

        
    }
    
    // int solve(string &s, int k){
    //     unordered_map<char, int> mp;
    //     int j = 0, ans = 0;
    //     for(int i = 0 ; i < s.size() ; i++){
    //         mp[s[i]]++;
            
    //         while(mp.size() > k){
    //             mp[s[j]]--;
    //             if(mp[s[j]] == 0){
    //                 mp.erase(s[j]);
    //             }
    //             j++;
    //         }
            
            
    //         ans += i - j + 1;
            
    //     }
        
    //     return ans;
    // }
};