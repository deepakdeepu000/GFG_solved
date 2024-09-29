//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int dp[100001];
    int getCost(int idx, int step , vector<int> &arr, int n){
        
        if(idx == n){
            return 0;
        }
        
        
        if(dp[idx] != -1){
            return dp[idx];
        }
        
        int ans = INT_MAX;
        
        for(int i = 1 ; i <= step ; i++){
            if(idx+i <= n){
                ans = min(ans , abs(arr[idx] - arr[idx + i]) + getCost( idx+i , step , arr , n));
            }
        }
        
        return dp[idx] = ans;
    }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        memset(dp,-1,sizeof(dp));
        
        return getCost(0,k,arr,arr.size()-1);
        
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends