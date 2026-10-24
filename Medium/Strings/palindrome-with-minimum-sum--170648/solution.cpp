class Solution {
  public:
    int minimumSum(string &s) {
        // code here
        int n = s.size();
        
        int sum = 0;
        char prev = '?';
        int  i = 0, j  = n - 1;
        while(i <= j){
            
            if(s[i] != '?' && s[j] != '?' && s[i] != s[j] ) return -1;
            
            char curr = s[i];
            if(s[i] != '?'){
                curr = s[i];
            }else{
                curr = s[j];
            }
            
            if(curr == '?') {
                i++;
                j--;
                continue;
            }
            
            if(prev != '?'){
                sum += abs(curr - prev);
            }
            
            prev = curr;
            
            i++;
            j--;
        }
        
        return 2*sum;
        
        
    }
        
};
