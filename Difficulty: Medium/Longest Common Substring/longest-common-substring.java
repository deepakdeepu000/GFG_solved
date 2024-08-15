//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S1 = read.readLine().trim();
            String S2 = read.readLine().trim();

            Solution ob = new Solution();
            System.out.println(ob.longestCommonSubstr(S1, S2));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    
    
    public int moon(String s1,String s2,int i,int j){
        int count=0;
        while(i<s1.length() && j<s2.length()){
            if(s1.charAt(i)!=s2.charAt(j))return count;
            count++;
            i++;
            j++;
        }
        return count;
    }
    
    
    public int longestCommonSubstr(String s1, String s2) {
        ArrayList<Integer> arr[] = new ArrayList[256];
        for(int i=0;i<256;i++)arr[i] = new ArrayList<>();
        char c;
        for(int i=0;i<s2.length();i++){
            c=s2.charAt(i);
            arr[c].add(i);
        }
        int max=0;
        for(int i=0;i<s1.length();i++){
            c=s1.charAt(i);
            if(arr[c].size()!=0){
                for(int j:arr[c]){
                    max=Math.max(max,moon(s1,s2,i,j));
                }
            }
        }
        return max;
    }
}