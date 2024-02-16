//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void min_path(vector<int> adj[], int src ,vector<int> &mypath){
        queue<int> Q;
        mypath[src] = 0;
        Q.push(src);
        while(!Q.empty()){
            int top = Q.front();
            Q.pop();
            //cout << top << " ";
            for(auto it : adj[top]){
                if(mypath[it] == -1){
                    mypath[it] = mypath[top] + 1;
                    Q.push(it);
                }
            }
        }
    }
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<int> mypath(N,-1);
        vector<int> adj[N+1];
        int E = edges.size();
        //cout << E << N << " ";
        for(int i =  0 ; i < E ; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // for (auto& pair : edges) {
        //     if (pair.size() == 2) {
        //         adj[pair[0]].push_back(pair[1]);
        //         adj[pair[1]].push_back(pair[0]);
                
        //     } else {
        //         adj[pair[0]] = {};
        //     }
        // }
        
        // for(int i = 0 ; i< N ; i++) {
        //     cout << i << " -> ";
        //     for(auto it : adj[i]) {
        //         cout << it << " ";
        //     }
        //     cout << endl;
        // }
        min_path(adj, src , mypath);
        // mypath.pop_back();
        return mypath;
        //return {};
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends