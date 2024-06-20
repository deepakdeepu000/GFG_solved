//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    pair<long long, long long> getMinMax(long long arr[], int n) {
        // code here
        long long mini = INT_MAX, maxi = INT_MIN;
        for(int i = 0 ; i < n ; i++){
            mini = min(mini , arr[i]);
            maxi = max(maxi , arr[i]);
        }
        return {mini , maxi};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends