//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    vector<int> dp;
	    int fun(int n , vector<int> &dp){
	        if(n == 0) return 1;
	        
	        if(n == 1) return 1;
	        
	        if(dp[n] != -1 ) return dp[n];
	        
	        return  dp[n] = 1 + min(fun(n - 1 , dp) , fun(n - 2 , dp));
	        
	    }
	    
		int nthStair(int n){
		    //  Code here
		    vector<int> dp( n + 1 , -1);
		    return fun(n , dp);
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends