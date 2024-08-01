class Solution:
    # Function to return a list of integers denoting spiral traversal of matrix.
    def spirallyTraverse(self, matrix):
        # code here
        row=len(matrix)
        col=len(matrix[0])
        t,b,r,l=0,row-1,col-1,0
        re=[]
        while(t<=b and l<=r):
            for i in range(l,r+1):
                re.append(matrix[t][i])
            t+=1
            for i in range(t,b+1):
                re.append(matrix[i][r])
            r-=1
            if t<=b:
                for i in range(r,l-1,-1):
                    re.append(matrix[b][i])
                b-=1
            if l<=r:
                for i in range(b,t-1,-1):
                    re.append(matrix[i][l])
                l+=1
        return re

#{ 
 # Driver Code Starts
if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    data = input().split()

    t = int(data[0])
    index = 1
    for _ in range(t):
        r = int(data[index])
        c = int(data[index + 1])
        index += 2
        matrix = []
        for i in range(r):
            row = list(map(int, data[index:index + c]))
            matrix.append(row)
            index += c

        solution = Solution()
        result = solution.spirallyTraverse(matrix)
        print(" ".join(map(str, result)))

# } Driver Code Ends