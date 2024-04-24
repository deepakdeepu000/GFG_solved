//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    static const int MOD = 1e9 + 7;
    int dp[501][501];
     Solution() {
        memset(dp, -1, sizeof(dp));
    }
    int ways(int x, int y)
    {
        //code here.
        if(x < 0 or y < 0){
            return 0;
        }
        
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        
        if(x == 0 and y == 0){
            return 1;
        }
        
       dp[x][y] = (ways(x-1 , y) + ways( x , y-1))%MOD;
       
       return dp[x][y];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends