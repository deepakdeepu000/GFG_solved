class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        vector<int> arr;
        while(!q.empty()){
            arr.push_back(q.front());
            q.pop();
        }
        
        int n = arr.size();
        int mid = n / 2, i = 0;
        int j = mid;
        while(i <  mid && j < n){
            q.push(arr[i++]);
            q.push(arr[j++]);
        }
        
        
        return;
    }
};