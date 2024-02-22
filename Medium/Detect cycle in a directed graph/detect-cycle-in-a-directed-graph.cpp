//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool cyclechecker(int node,vector<int>&vis,vector<int>adj[],vector<int>&vis1)
    {
        vis[node]=1;
        vis1[node]=1;
        for(auto it:adj[node])
        {
           if(vis[it]==0)
           {
               if(cyclechecker(it,vis,adj,vis1)) return true;
           }
           else if(vis1[it]==1){
               return true;
           }
           
        }
        vis1[node]=0;
       
        return false;
    }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int n, vector<int> adj[]) {
        // code here
        vector<int>vis(n+1,0);
    	vector<int>vis1(n+1,0);
    	
    // 	for(int i = 0 ; i < n ; i++ ){
    // 	    cout << i <<  "<-" ;
    // 	    for(auto it : adj[i]) cout << it << " ";
    // 	    cout << endl;
    // 	}
    	
    	for(int i=0;i<n;i++)
    	{
    	    if(!vis[i])
    	    {
    	        if(cyclechecker(i,vis,adj,vis1))
    	        {
    	            return true;
    	        }
    	    }
    	}
    	return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends