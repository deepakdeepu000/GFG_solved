//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
        int n = nums.size();
        int one_third = n / 3;
        map<int,int> mp;
        for(int i = 0 ; i < n ; i++ ){
            mp[nums[i]]++;
        }
        
        vector<int> ans;
        int cnt = 0;
        
        for(auto it : mp){
            if(it.second > one_third){
                ans.push_back(it.first);
                cnt++;
            }
        }
        
        if(ans.size() > 0){
            return ans;
        }
        
        return {-1};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends