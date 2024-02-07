//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s,s1;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           //Write your code here
            if(!s1.empty()) {
               return s1.top();
           }
           return -1;
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(!s.empty() and !s1.empty()){
               if(s.top() == s1.top()){
                   s1.pop();
               }
               int ans = s.top();
               s.pop();
               return ans;
           }
           
           return -1;
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           if (s1.empty() or x<= s1.top()) {
            s1.push(x);
        }
        s.push(x);
           //Write your code here
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends