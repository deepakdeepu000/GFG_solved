class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_set<int> freq;
        vector<int> res;
        for(int i = 0 ;i  < a.size(); i++){
            if(!freq.count(a[i])){
                freq.insert(a[i]);
                res.push_back(a[i]);
            }
        }
        
        for(int j = 0; j < b.size(); j++){
            if(!freq.count(b[j])){
                freq.insert(b[j]);
                res.push_back(b[j]);
            }
        }
        
        return res;
        
        
    }
};