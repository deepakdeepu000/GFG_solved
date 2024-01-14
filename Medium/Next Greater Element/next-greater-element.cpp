//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#define pb push_back
#define pp pop
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long> actions(n, -1);
        stack<int> stackk;
    
        for (int i = 0; i < n; ++i) {
            while (!stackk.empty() && arr[i] > arr[stackk.top()]) {
                actions[stackk.top()] = arr[i];
                stackk.pop();
            }
            stackk.push(i);
        }
    
        return actions;
        
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends