//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int mod = 1e9+7;
    long long findNumber(int rec , int start , int n){
        if( rec > n ) return 0;
        
        long long ans = 1;
       // cout << rec << " ";
        for( int i = 0 ; i < rec ; i++ ){
            //cout << start << " ";
            ans = (ans * start) % mod;
            start++;
        }
        
        ans = ans % mod;
        //cout << endl;
        
        return (ans + findNumber( rec+1 , start , n)) % mod;
    }
    long long sequence(int n){
        // code here
        
        return findNumber(1,1,n);
        
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
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends