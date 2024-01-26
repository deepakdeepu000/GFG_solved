//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> visited;
    // vector<int>  helper(int n, vector<int> &v){
    //     if(n == 0){
    //         v.push_back(0);
    //         return v;
    //     }
    //     else
    //     {
    //         v = helper(n-1, v);
    //         int ele = v[n-1]-n;
    //         if( ele > 0 and visited[ele] == 0){
    //             v.push_back(ele);
    //             visited[ele] = 1;
    //         }
    //         else{
    //             v.push_back(v[n-1]+n);
    //             visited[v[n-1]+n] = 1;
    //         }
    //     }
    //     return v;
    // }
    
    vector<int> recamanSequence(int n){
        // code here5
        vector<int> v;
        // visited.resize(1000001, 0);
        unordered_map<int, int> visited;
        int i=1;
        v.push_back(0);
        while(i<=n)
        {
            int ele = v[i-1]-i;
            if( ele > 0 and visited[ele] == 0){
                v.push_back(ele);
                visited[ele]++;
            }
            else{
                v.push_back(v[i-1]+i);
                visited[v[i-1]+i]++;
            }
            i++;
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends