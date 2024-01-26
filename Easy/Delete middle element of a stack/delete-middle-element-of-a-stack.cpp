//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void Helper(stack<int>&s, int N,int M){
        
        if( N == M){
            s.pop();
            return;
        }
        int a = s.top();
        s.pop();
        Helper(s,N-1,M);
        s.push(a);
        
        
        
    }
    void deleteMid(stack<int>&s, int N)
    {
        // code here.. 
        int mid = floor((N+1)/2);
       // cout << mid << " ";
        Helper(s,N,mid);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends