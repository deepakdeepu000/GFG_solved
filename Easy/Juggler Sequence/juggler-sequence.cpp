//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int k = 0;
    vector<int> v;
    vector<int> jugglerSequence(int N) {
        // code here
        if( k == 0){
            v.push_back(N);
            k = 1;
        }
        
        if( N <= 1){
            return v;
        }
        
        if(N%2 != 0){
            N = (int) N * sqrt(N);
            v.push_back(N);
        }
        else{
            N = (int)sqrt(N);
            v.push_back(N);
        }
        jugglerSequence(N);
        
        return v;
        
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
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends