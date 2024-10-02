//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        int index = 0;
        if (n % 2 == 0){
            if(n%4 == 0){
                index = (n / 4);
            }else{
                index = (n / 4) + 1;
            }
        }else{
            if(n%4 == 1){    
                index = ((n - 1) / 4) + 1;
            }else{
                index = ((n + 1) / 4) + 1;
            }
        }
        
        return arr[index];
        
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends