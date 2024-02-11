//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int dp[101][101][101];
    long long PathCount( int i , int j , int target ,int n , vector<vector<int>> &arr){
        
        if( i == n-1 and j == n-1 ){
            if( target - arr[i][j] == 0 ) return 1;
        }
        if( i >= n || j >=n || target<0) return 0;
        
        if( dp[target][i][j] != -1) return dp[target][i][j];
        
        
        
        return dp[target][i][j] = PathCount( i+1 , j , target - arr[i][j] , n , arr) + PathCount( i , j+1 , target - arr[i][j], n , arr);
        
    } 
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        
        // Code Here
        memset(dp,-1,sizeof(dp));
        return PathCount(0,0,k,n,arr);
        
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends