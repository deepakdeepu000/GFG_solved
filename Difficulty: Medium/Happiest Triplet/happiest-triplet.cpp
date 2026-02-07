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
            
            // get the curr min and max of the elements of three arrays.
            int maxi = max({a[i],b[j],c[k]});
            int mini = min({a[i],b[j],c[k]});
            
            //calculate the differnece them
            int diff = maxi - mini;
            
            // calculate the sum in case the resultant differnce is same we will take the triplets having the least sum
            int sum = a[i] + b[j] + c[k];
            
            // we will then consider that the triplet is need to be considered or not
            if(prev_diff > diff || ( prev_diff == diff && sum < prev_sum)){
                
                // update the values and triplets
                prev_diff = diff;
                prev_sum = sum;
                ans = {a[i],b[j],c[k]};
            }else if(mini == a[i]){
                // explore the other options.
                // why we conditioning minimum because we want our minimum value to the as close as possible to our maximum to get minimum difference.
                i++;
            }else if(mini == b[j]){
                j++;
            }else{
                k++;
            }
        }
        
        //sort the elements in decending order.
        
        sort(ans.begin(), ans.end(), greater<int>());
        return ans;
       
    }
};