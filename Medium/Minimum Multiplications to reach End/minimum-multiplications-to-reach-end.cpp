//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        // code here
        if( start == end ) return 0;
        
        int MOD = 100000;
        queue<pair<int,int>> qu;
        qu.push({start, 0});
        
        int visited[1000000];
        memset(visited,  false , sizeof(visited));
        visited[ start ] = false;
        
        while(!qu.empty()){
            auto start = qu.front().first ;
            auto steps = qu.front().second ;
            qu.pop();
            for(int i = 0 ; i < arr.size() ; i ++ ){
               
                int newstart = (start * arr[i]) % MOD;
                
                if(!visited[newstart]){
                    
                    visited[ newstart ] = true;
                    
                    if(newstart == end) return steps + 1;
                    
                    qu.push({newstart , steps + 1});
                }
                
            }
        }
       return -1;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int start, end;
        cin >> start >> end;
        Solution obj;
        cout << obj.minimumMultiplications(arr, start, end) << endl;
    }
}

// } Driver Code Ends