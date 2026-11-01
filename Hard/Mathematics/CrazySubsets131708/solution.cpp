class Solution {
  public:
    const int MOD = 1000000007;
    //Because of how the array f is indexed and what the largest MEX can be.
        //Largest MEX is maxi + 1. If the array contains every value 0..maxi, the MEX of a subset can reach maxi + 1. So the loop runs i from 0 to maxi + 1.
        //Array size must cover index maxi + 1. The loop reads f[i] when i = maxi + 1. A vector of size maxi + 1 only has indices 0..maxi, so f[maxi + 1] would be out of bounds. Size maxi + 2 gives indices 0..maxi+1, which is exactly what’s needed. f[maxi + 1] is just 0, since no element has that value.
        //Rule of thumb: to access index k, allocate size k + 1. Here k = maxi + 1, so size is maxi + 2        
        
        //example for why maxi + 2 is needed 
        // [2, 3, 3, 1, 0, 2, 5, 4] l = 6, r = 7
        
        
        //revise mod placement 
        // [1, 35, 134, 20, 28, 17, 74, 46, 107, 116, 11, 121, 105, 120,
        //85, 145, 89, 146, 61, 78, 55, 56, 81, 29, 67, 9, 122, 90, 36, 
        //80, 54, 14, 18, 40, 143, 103, 81, 94, 50, 136, 5, 51, 101, 105,
        //70, 19, 43, 72, 97, 68, 73, 1, 23, 76, 13, 111, 53, 73, 65, 76, 
        //133, 59, 95, 108, 8, 64, 23, 61, 92, 69, 30, 100, 1, 31, 148, 100,
        // 93, 12, 4, 91, 57, 84, 23, 58, 66, 33, 38, 3, 64, 83, 18, 24, 54,
        // 10, 111, 17, 99, 83, 98, 22, 71, 43, 162, 68, 34, 10, 141, 41, 0,
        // 88, 2, 37, 6, 29, 83, 87, 21, 72, 73, 104, 124, 25, 94, 41, 86,
        // 7, 67, 38, 157, 72, 75, 42, 101, 63, 8, 48, 44, 4, 53, 137, 92, 70,
        // 8, 60, 63, 27, 52, 79, 15, 39, 62, 32, 31, 26, 49, 104, 77, 47, 52, 9, 16, 96, 82, 106, 20, 45, 102, 81]
        // l = 109, r =133
    int cntSubsets(vector<int> &arr, int l, int r) {
        // code here
        
        int maxi = *max_element(arr.begin(), arr.end());
        vector<int> freq(maxi + 2, 0);
        int n = arr.size();
        for(int i = 0; i < n; i++ ){
            freq[arr[i]]++;
        }
        
        vector<long long> power(n + 1, 1);
        for(int i = 1; i <= n; i++){
            power[i] = power[i - 1] * 2 % MOD;
        }
        
        
        long long ans = 0, ways = 1;
        int seen = 0;
        
        for(int i = 0 ; i <= min(r, maxi + 1); i++){
            if(i > 0){
                if(freq[i - 1] == 0){
                    break;
                }
                ways = ways * ((power[freq[i - 1]] - 1 + MOD) % MOD) % MOD;
            }
            
            if( i >= l){
                int unseen = n - seen - freq[i]; 
                ans = (ans + ways * power[unseen]) % MOD;
            }
            
            seen += freq[i];
            
        }
        
        return (int)ans;
        
    }
};
