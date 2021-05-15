class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        return max(map(sum, accounts))
    
    def maximumWealth2(self, accounts: List[List[int]]) -> int:
        max_wealth = 0
        for account in accounts:
            curr_wealth = sum(account)
            if curr_wealth > max_wealth:
                max_wealth = curr_wealth
        return max_wealth   
