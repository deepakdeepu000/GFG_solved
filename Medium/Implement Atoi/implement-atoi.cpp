//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int mynum = 0,f= 0;
        if(s[0] == '-'){
            f = 1;
        }
        for(int i = f;i < s.size();i++){
            int digit = s[i] - '0';
            
            if(digit >= 0 and digit <= 9){
                mynum = mynum*10+digit;
            }
            else{
                return -1;
            }
        }
        if(f == 1) mynum=0-mynum;
        return mynum;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends