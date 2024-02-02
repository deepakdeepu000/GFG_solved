//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> mp;
        int s=0;
        int maxl=0;
        for(int i=0;i<n;i++)
        {
            s=s+A[i];
            if(s==0)
            {
                maxl=max(maxl,i+1);
            }
            int rem=s;
            if(mp.find(rem)!=mp.end())
            {
                int len=i-mp[rem];
                maxl=max(maxl,len);
            }
            if(mp.find(rem)==mp.end())
            {
                mp[s]=i;
            }
        }
        return maxl;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends