//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        if( d == 1 and s < 10) return to_string(s);
        
        if( s > 9 * d) return "-1";
        
        string str = "";
        
        for( int i = d - 1 ; i >= 0 ; i-- ){
            
            for( int j = 9 ; j >= 0 ; j--){
                
                if( i != 0){
                    
                    if(s - j > 0){
                        str +=  j+'0';
                        s -= j;
                        break;
                    }
                }
                else{
                    
                    str += s+'0';
                    break;
                }
            }
            
        }
        
        reverse(str.begin() , str.end());
        
        return str;
            
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends