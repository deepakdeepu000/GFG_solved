//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long n) {
        // code here
        long long rev = 0;
        int j = 31;
        for(int i = 0 ; i < 32 ; i++){
            if(n&(1 << i)){
                rev += pow(2,j);
            }
            j--;
        }
        return rev;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends