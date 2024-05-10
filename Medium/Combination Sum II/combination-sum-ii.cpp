//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<int>> v;
    void Helper(int idx ,vector<int> &arr,int n,int target , vector<int> temp){
         if(target == 0){
            v.push_back(temp);
            return;
        }
        if(idx == n || target < 0){
            return;
        }
        for(int i = idx ; i < n ; i++ ){
            if( i > idx and arr[i] == arr[i - 1]){
                continue;
            }
            temp.push_back(arr[i]);
            Helper( i+1, arr ,n , target - arr[i] , temp );
            temp.pop_back();
        }
    }
    vector<vector<int>> CombinationSum2(vector<int> arr,int n,int k)
    {
        //code here
        
        vector<int> temp;
        sort(arr.begin() , arr.end());
        Helper(0 , arr , n , k , temp);
        return v;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends