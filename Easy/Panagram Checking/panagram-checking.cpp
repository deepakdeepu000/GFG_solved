//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        
        vector<int> v(26,0);
        for(int i = 0;i< s.size();i++){
            char k = (char)tolower(s[i]);
            int z = k-'a';
            //cout << z << " " << k << " ";
            if(z>= 0 and z<= 25) v[z]++;
        }
        if(count(v.begin(), v.end(), 0)){
            return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends