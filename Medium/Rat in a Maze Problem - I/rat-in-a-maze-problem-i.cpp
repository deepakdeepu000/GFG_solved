//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    #define vvb vector<vector<bool>>
    vector<string> res;
    void Helper(vector<vector<int>> &m,int rows,int col,string temp,int n,vvb &vis){
       
    

    if ((rows == 0 && col == 0) and m[rows][col]) {
        
        reverse(temp.rbegin(), temp.rend());
        
        res.push_back(temp);
        return;
    }

    
    if (rows >= 0 and rows < n and col >= 0 and col < n) {
        
        
        
        if (vis[rows][col]==true or m[rows][col] == 0) return;
        
        vis[rows][col] = true;
        
        Helper(m, rows, col - 1, temp + 'R', n,vis);
        Helper(m, rows + 1, col, temp + 'U', n,vis);
        Helper(m, rows - 1, col, temp + 'D', n,vis);
        Helper(m, rows, col + 1, temp + 'L', n,vis);
        
        vis[rows][col] = false;
    }

    
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        string temp;
        
        vvb vis(n,vector<bool>(n,false));
        
        Helper(m,n-1,n-1,temp,n,vis);
        
        
        
        // for(int i = 0 ;i < n;i++){
        //     for(int j = 0;j < n ;j++){
        //         cout <<  m[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
        return res;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends