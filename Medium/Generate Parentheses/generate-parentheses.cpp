//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution

{
    public:
    void helper(int op,int cl,int n,string &ds,vector<string> &ans){
        if(op == n and cl == n){
            ans.push_back(ds);
            return;
        }
        if(op < n){
            ds += "(";
            helper(op+1,cl,n,ds,ans);
            ds.pop_back();
        }
        
        if(cl < op){
            ds += ")";
            helper(op,cl+1,n,ds,ans);
            ds.pop_back();
        }
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        string ds;
        helper(0,0,n,ds,ans);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends