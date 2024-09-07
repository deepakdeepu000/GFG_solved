#User function Template for python3
import math

class Solution:
    def findNth(self,n):
        #code here
        if n == 0:
            return "0"
        digits = []
        while n > 0:
            digits.append(str(n % 9))
            n //= 9
        return ''.join(digits[::-1])


#{ 
 # Driver Code Starts
#Initial Template for Python 3

t = int(input())
for i in range(0, t):
    n = int(input())
    obj = Solution()
    s = obj.findNth(n)
    print(s)

# } Driver Code Ends