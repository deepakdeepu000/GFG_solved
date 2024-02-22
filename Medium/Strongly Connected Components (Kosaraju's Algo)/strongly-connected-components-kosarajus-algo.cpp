//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
    void DFS(vector<int> adj[], vector<bool>& vis, vector<int>& order, int src) {
        vis[src] = true;
        for (auto it : adj[src]) {
            if (!vis[it]) {
                DFS(adj, vis, order, it);
            }
        }
        order.push_back(src);
    }
    void DFSR(vector<int> adj[], vector<bool>& vis1, int src) {
        vis1[src] = true;
        for (auto it : adj[src]) {
            if (!vis1[it]) {
                DFSR(adj, vis1, it);
            }
        }
    }
    int kosaraju(int n, vector<vector<int>>& a) {
        vector<int> order;
        vector<bool> vis1(n, false);
        vector<int> adj[n + 1];
        for (int i = 0; i < n; i++) {
            for (auto it : a[i]) {
                adj[i].push_back(it);
            }
        }

        for (int i = 0; i < n; ++i) {
            if (!vis1[i]) {
                DFS(adj, vis1, order, i);
            }
        }

        reverse(order.begin(), order.end());


        vector<int> adj1[n + 1];
        for (int i = 0; i < n; i++) {
            for (auto it : adj[i]) {
                adj1[it].push_back(i); 
            }
            vis1[i] = false;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (!vis1[order[i]]) {
                DFSR(adj1, vis1, order[i]);
                cnt++;
            }
        }

        return cnt;
    }
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E;
    	cin >> V >> E;

    	vector<vector<int>> adj(V);

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    	}

    	Solution obj;
    	cout << obj.kosaraju(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends