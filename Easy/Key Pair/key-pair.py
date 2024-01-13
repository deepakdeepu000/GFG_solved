#User function Template for python3
class Solution:
	def hasArrayTwoCandidates(self,arr, n, x):
		# code here
        d={}
        for i in arr:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        for i in range(n):
            s=x-arr[i]
            if s in d:
                if (s==arr[i] and d[s]>1) or s!=arr[i]:
                    return True
        return False


#{ 
 # Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, x = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.hasArrayTwoCandidates(arr, n, x)
        if ans:
            print("Yes")
        else:
            print("No")
        tc -= 1

# } Driver Code Ends