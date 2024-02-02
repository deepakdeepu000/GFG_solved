//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void Helper(int i,string temp,int a[],int N,vector<string> &v){
        if(i == N){
            temp += '\0';
            if(temp[0] == '\0') return;
            v.push_back(temp);
            return;
        }
        
        
        //cout << digit;
        
        if(a[i] == 0 or a[i] == 1){
            return;
            //Helper(i+1,temp,a,N,v);
            
        }
        
        for(int j = 0;keys[a[i]][j] != '\0';j++){
            Helper(i+1,temp+keys[a[i]][j],a,N,v);
        }
        
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> v;
        string ans;
        Helper(0,ans,a,N,v);
        
        return v;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends