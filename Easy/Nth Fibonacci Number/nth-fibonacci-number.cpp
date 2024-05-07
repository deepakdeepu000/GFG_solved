//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int MOD = 1e9 + 7;
    int nthFibonacci(int n){
        int k[] = {0 , 1};
        for(int i = 2 ; i <= n/2 + 1 ; i++ ){
            k[0] = (k[0] + k[1]) % MOD;
            k[1] = (k[0] + k[1]) % MOD;
        }
        return k[(n&1)];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends