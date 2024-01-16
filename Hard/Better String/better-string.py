#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

class Solution:
    
    def distinctSubsequences(self, S):
        app=[-1]*256
    
        n=len(S)
        li=[0]*(n+1)
        li[0]=1    
    
        for i in range(1,n+1):
            c=S[i-1]
            idx=ord(c)
            if app[idx]==-1:
                li[i]=2*li[i-1]
            else:
                li[i]=2*li[i-1]-li[app[idx]]
            app[idx]=i-1

        return li[n]
    def betterString(self, str1, str2):
        
        ds1=self.distinctSubsequences(str1)
        ds2=self.distinctSubsequences(str2)
        
        if ds1>=ds2:
            return str1
        else:
            return str2
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input ())
    for _ in range (t):
        str1 = input()
        str2 = input()
        ob = Solution()
        res = ob.betterString(str1, str2)
        print(res)
# } Driver Code Ends