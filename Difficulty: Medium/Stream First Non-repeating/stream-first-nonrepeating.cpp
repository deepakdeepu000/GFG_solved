class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        int arr[26] = {0};
        string ans = "";
        queue<char> q;
        for(int i = 0; i < s.size() ;i++){
            
            q.push(s[i]);
            arr[s[i] - 'a']++;
            
            while(!q.empty() and arr[q.front() - 'a'] > 1){
                q.pop();
            }
            
            if(q.empty())
                ans += '#';
            else
                ans += q.front();
        }
        
        return ans;
    }
};