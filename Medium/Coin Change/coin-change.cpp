//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   
    long long int  Helper(int idx,int coins[],int N,int sum,vector<vector<long long int>> &dp){
        
        if(idx == N or sum < 0){
            return 0;
        }
        if(sum == 0) return 1;
        if(dp[idx][sum] != -1) return dp[idx][sum];
        
        long long int pick = Helper(idx,coins,N,sum-coins[idx],dp);
        
        long long int non_pick = Helper(idx+1,coins,N,sum,dp);
        
        return dp[idx][sum] = pick+non_pick;
        
        //
        // if(N == 0) return 0;
        // if(sum == 0)  return 1;
        // if(dp[N][sum] != -1) return dp[N][sum];
        
        // long long int ans = 0;
        // long long int ans1 = 0;
        // if(coins[N] <= sum){
        //     ans+=Helper(coins,N,sum-coins[N],dp);
        // }
        // ans1=Helper(coins,N-1,sum,dp);
        // return dp[N][sum] = ans;
        
        
        
    }
    long long int count(int coins[], int N, int sum) {

        // code here.
        vector<vector<long long int>> dp(N+1,vector<long long int>(sum+1,-1));
        return  Helper(0,coins,N,sum,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends