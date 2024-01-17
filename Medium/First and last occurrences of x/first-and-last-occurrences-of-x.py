#User function Template for python3


class Solution:
    def find(self, arr, n, x):
        f,l = 0,0
        b = [-1]*2
        k = 0
        for i in range(n):
            if arr[i] == x and k==0:
                f,l = i,i
                k = 1
            if arr[i] == x and k !=0:
                l = i
        if l==0 and l == 0:
            return b
        b[0] = f
        b[1] = l
        return b
        
        # code here


#{ 
 # Driver Code Starts
t=int(input())
for _ in range(0,t):
    l=list(map(int,input().split()))
    n=l[0]
    x=l[1]
    arr=list(map(int,input().split()))
    ob = Solution()
    ans=ob.find(arr,n,x)
    print(*ans)
# } Driver Code Ends