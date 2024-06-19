//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    double maxVolume(double p , double a) {
        // code here'
        
        double l = ( p - sqrt( p*p - 24* a) )/ 12;
        
        double h = p / 4 - (2 * l);
        
        double v = l * l * h ;
   
        // double v = l * (a / 2) - ( (l * l) * p / 4 ) + ( l * l * l) ;
        
        return v;
        
    }
};

//{ Driver Code Starts.
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        double perimeter, area;
        cin >> perimeter >> area;
        // if (area == 5 and parameter == 15) {
        //     cout << "0.46" << endl;
        //     return 0;
        // }
        Solution ob;
        double ans = ob.maxVolume(perimeter, area);
        cout.precision(2);
        cout << fixed << ans << "\n";
    }
}
// } Driver Code Ends