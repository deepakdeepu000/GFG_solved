//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gfSeries(int N)
    {
        // Write Your Code here
        solve(N,0,1);
        cout << endl;
    }
    
    void solve(int n,long int i,long int j){
        if(i == 0) cout << i <<" " << j << " ";
        
        if(n >= 3){
            long int k = (i*i)-j;
            cout << k << " ";
            solve(n-1,j,k);
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends