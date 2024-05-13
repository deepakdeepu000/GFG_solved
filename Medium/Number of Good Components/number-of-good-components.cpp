//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    void depthFirstSearch(int ind , vector<int> adj[] , vector<bool> &visited , unordered_set<int> &edge_set){
        visited[ind] = true;
        edge_set.insert(ind);
        for(int i : adj[ind]){
            if(!visited[i]){
                depthFirstSearch( i , adj , visited , edge_set);
            }
        }
    }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        // code here
        int Components_cnt = 0;
        vector<int> adj [v + 1];
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited( v+1 , false);
        
        for( int ind = 1 ; ind <= v ; ind ++ ){
            if( !visited[ind] ){
                unordered_set<int> edge_set ;
                depthFirstSearch( ind , adj , visited , edge_set );
                bool is_good = 1;
                for(int node : edge_set ){
                    if ( adj[node].size() != edge_set.size() - 1){
                        is_good = 0;
                        break;
                    }
                }
                if(is_good) Components_cnt++;
                
            }
        }
        
        return Components_cnt;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        int res = obj.findNumberOfGoodComponent(e, v, edges);

        cout << res << endl;
    }
}

// } Driver Code Ends