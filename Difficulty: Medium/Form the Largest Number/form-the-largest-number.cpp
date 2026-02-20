class Solution {
  public:
    
    struct cmp{
        bool operator() (const string &a, const string &b){
            return (a+b) < (b+a);
        }
    };
    string findLargest(vector<int> &arr) {
        // code here
        priority_queue<string,vector<string>, cmp> pq;
        for(int i = 0; i < arr.size() ;i++){
            
            pq.push(to_string(arr[i]));
            
        }
        
        string check = pq.top();
        if( check == "0"){
            return "0";
        }
        
        string res = "";
        while(!pq.empty()){
            res += pq.top();
            pq.pop();
        }
        
        return res;
    }
};