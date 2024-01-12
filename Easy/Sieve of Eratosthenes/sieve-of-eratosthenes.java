//{ Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int N=sc.nextInt();
			
            Solution ob = new Solution();
            ArrayList<Integer> primes  = ob.sieveOfEratosthenes(N);
            for(int prime : primes) {
                System.out.print(prime+" ");
            }
            System.out.println();
        }
    }
}

// } Driver Code Ends


//User function Template for Java
class Solution{
    static ArrayList<Integer> sieveOfEratosthenes(int N){
        // code here
        ArrayList<Integer> arr = new ArrayList<>();
        int sieve[] = new int[N+1];
        sieve[0]=sieve[1]=1;
        for(int i=2;i*i<=N;i++)
        {
            if(sieve[i]==0)
            {
                for(int j=i*i;j<=N;j+=i)
                {
                    if(sieve[j]==0)
                    {
                        sieve[j]=1;
                    }
                }
            }
        }
        for(int i=2;i <=N;i++){
            if(sieve[i] == 0) arr.add(i);
        }
        
        return arr;
        
    }
}