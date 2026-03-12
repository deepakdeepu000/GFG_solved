class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        // code here
        queue<int> q;
        int n = arr.size();
        int cnt = 0;
        for(int i = 0 ;i < n ; i++){
            
            while(!q.empty() && q.front() + k == i ){
                q.pop();
            }
            
            int curr = arr[i];
            
            if(q.size()%2 != 0){
                curr ^= 1;
            }
            
            if( curr == 0){
                if( i + k > n){
                    return -1;
                }
                
                q.push(i);
                cnt++;
            }
        }
        
        return cnt;
    }
};