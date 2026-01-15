class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        int tieves = 0 , police = 0;
        int j = 0, i = 0;
        int n = arr.size();
        while(i < n and j < n ){
            while(i < n and arr[i] != 'P'){
                i++;
            }
            
            while(j < n and arr[j] != 'T'){
                j++;
            }
            
            if( i < n and j < n and abs(j - i) <= k){
                tieves++;
                
                i++;
                
                j++;
            }else if(i < n and j < i){
                j++;
            }else if(j < n and i < j){
                i++;
            }
        }
        
        return tieves;
    }
};