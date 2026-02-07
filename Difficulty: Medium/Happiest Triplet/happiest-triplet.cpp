class Solution {
  public:
    vector<int> smallestDiff(vector<int>& a, vector<int>& b, vector<int>& c) {
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        int n = a.size();
        int prev_diff = INT_MAX, prev_sum = INT_MAX;
        vector<int> ans;
        int i = 0, j = 0, k = 0;
        while(i < n and j < n and k < n){
            
            int maxi = max({a[i],b[j],c[k]});
            int mini = min({a[i],b[j],c[k]});
            int diff = maxi - mini;
            int sum = a[i] + b[j] + c[k];
            
            if(prev_diff > diff || ( prev_diff == diff && sum < prev_sum)){
                prev_diff = diff;
                prev_sum = sum;
                ans = {a[i],b[j],c[k]};
            }else if(mini == a[i]){
                i++;
            }else if(mini == b[j]){
                j++;
            }else{
                k++;
            }
        }
        
        sort(ans.begin(), ans.end(), greater<int>());
        return ans;
       
    }
};