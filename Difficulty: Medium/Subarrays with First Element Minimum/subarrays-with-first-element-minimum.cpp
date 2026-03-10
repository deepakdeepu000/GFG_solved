class Solution {
  public:
    int countSubarrays(vector<int> &arr) {
        // code here
        stack<int> s;
        int cnt = 0;
        int n = arr.size(), least_ele_idx = 0;
        for(int i = 0 ; i < n ; i++){
            while(!s.empty() and arr[i] < arr[s.top()]){
                int idx = s.top();
                cnt += (i - idx);
                s.pop();
            }
            s.push(i);
        }
        
        while(!s.empty()){
            cnt += n - s.top();
            s.pop();
        }
        
        return cnt;
    }
};