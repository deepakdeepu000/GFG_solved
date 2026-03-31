class Solution:
    def maxProfit(self, arr, k):
        # Code here
        cash = 0
        holding = -arr[0]
        
        for prize in arr:
            prev_cash = cash
            
            cash = max(cash, holding + prize - k)
            
            holding = max(holding, prev_cash - prize)
            
            
        return cash
            