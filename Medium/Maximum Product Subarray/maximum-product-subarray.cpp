//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long maxi = INT_MIN;
	    long long pre_pro = 1;
	    long long suff_pro = 1;
	    for(int i = 0 ; i < n ; i++){
	        if(pre_pro == 0) pre_pro = 1;
	        
	        if(suff_pro == 0) suff_pro = 1;
	        
	        pre_pro *= arr[i];
	        suff_pro *= arr[n-1-i];
	        
	        maxi = max(maxi , max( pre_pro , suff_pro));
	    }
	    
	    return maxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends