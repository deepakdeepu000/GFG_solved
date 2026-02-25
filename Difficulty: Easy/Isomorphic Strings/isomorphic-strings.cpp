class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        vector<int> arr1(26, -1);
        vector<int> arr2(26, -1);
        
        for(int i = 0 ; i < s1.size(); i++){
            int c1 = s1[i] - 'a';
            int c2 = s2[i] - 'a';
            
            if(arr1[c1] == -1 and arr2[c2] == -1){
                arr1[c1] = c2;
                arr2[c2] = c1;
            }else if( arr1[c1] != c2 or arr2[c2] != c1){
                return false;
            }
        }
        
        return true;
    }
};