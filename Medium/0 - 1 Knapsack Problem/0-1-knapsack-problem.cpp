//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    int knapSacK(int idx,int W,int wt[],int val[],int n,vector<vector<int>>&dp){
        if(idx == 0){
            if(W >= wt[idx]){
                return val[idx];
            }
            return 0;
        }
    
        if(dp[idx][W] != -1) return dp[idx][W];
    
    
        
        int pick = INT_MIN;
        if(W >= wt[idx]){
            pick = val[idx] + knapSacK(idx-1,W-wt[idx],wt,val,n,dp);
        }
    
        int no_pick = knapSacK(idx-1,W,wt,val,n,dp);
    
        return dp[idx][W] = max(pick,no_pick);
    }
    
    
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n,vector<int>(W+1,-1));
       return knapSacK(n-1,W,wt,val,n,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends