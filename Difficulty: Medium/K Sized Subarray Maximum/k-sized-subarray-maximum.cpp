class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        priority_queue<pair<int , int>> pq;
        
        vector<int> ans;
        
        for(int i = 0 ;  i < arr.size() ; i++ ){
            
            while(!pq.empty() and pq.top().second <= i - k ){
                pq.pop();
            }
            
            pq.push({arr[i] , i});
            
            if( i >= k - 1){
                ans.push_back(pq.top().first);
            }
        }
        
        return ans;
    }
};