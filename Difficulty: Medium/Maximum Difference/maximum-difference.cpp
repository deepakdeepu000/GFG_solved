//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        
        // Your code here
        
        vector<int> left(arr.size(),0);
        vector<int> right(arr.size() , 0);
        int n = arr.size();
        stack<int> st;
        st.push(arr[0]);
        for( int i = 1 ; i < n; i++ ){
            while(!st.empty() and st.top() >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                left[i] = 0;
            }else{
                left[i] = st.top();
            }
            st.push(arr[i]);
        }
        st = stack<int>();
        st.push(arr[n-1]);
        for(int i = n - 2 ; i >= 0 ; i-- ){
            while(!st.empty() and st.top() >= arr[i]){
                st.pop();
            }
            if(st.empty()){
                right[i] = 0;
            }else{
                right[i] = st.top();
            }
            st.push(arr[i]);
        }
        
        int max_ele = INT_MIN;
        
        for(int i = 0 ; i < n ; i++ ){
            max_ele = max(max_ele , abs(left[i] - right[i]));
        }
        return max_ele;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends