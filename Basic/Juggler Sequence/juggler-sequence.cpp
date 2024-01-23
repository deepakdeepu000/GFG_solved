//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    void solve(int N,vector<int> &v){
        if(N <= 1) return;
        
        if(N%2 != 0){
            N = (int)N*sqrt(N);
            v.push_back(N);
        }
        else{
            N = (int)sqrt(N);
            v.push_back(N);
        }
        solve(N,v);
        
    }
    vector<int> jugglerSequence(int N){
        // code here
        vector<int> v;
        v.push_back(N);
        solve(N,v);
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.jugglerSequence(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends