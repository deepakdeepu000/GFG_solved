//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
private:
    bool palindrome( int n){
        int temp = n;
        int num = 0;
        while(temp > 0){
            int digit = temp%10;
            num = num*10 + digit;
            temp = temp/10;
        }
        
        return num == n;
    }
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	for(int i = 0 ;i < n ; i++ ){
    	    if(!palindrome(a[i])){
    	        return 0;
    	    }
    	}
    	return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends