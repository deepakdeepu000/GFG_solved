//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(vector<long long>& arr) {
        // Your code here
        priority_queue <long long ,vector<long long> , greater<long long> > manager(arr.begin(),arr.end());
        long long totalcost = 0;
        while(manager.size() > 1){
            long long top_one = manager.top();
            manager.pop();
            long long top_second = manager.top();
            manager.pop();
            long long cost = top_one + top_second;
            totalcost += cost;
            manager.push(cost);
        }
        return totalcost;
    }
        
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        long long num;
        vector<long long> a;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        cout << ob.minCost(a) << endl;
    }
    return 0;
}

// } Driver Code Ends