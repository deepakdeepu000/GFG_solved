class Solution {
  public:
    int maxPackages(vector<int>& arr, int totaltime) {
        // code here
        int maxi=0;
               if(totaltime>=arr.size()){
                   for(int i:arr){
                       maxi+=i;
                   }
                   return maxi;
               }
               int v=0;
               for(int i=0;i<totaltime;i++){
                   v+=arr[i];
               }
               maxi=max(maxi,v);
               for(int i=totaltime;i<arr.size();i++){
                   v=v+arr[i]-arr[i-totaltime];
                   maxi=max(maxi,v);
               }
               return maxi;
    }
};
