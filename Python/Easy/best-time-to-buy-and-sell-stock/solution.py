class Solution:
    # two pointer solution
    # Time Complexity: O(n)
    # Space Complexity: O(1)
    def maxProfit(self, prices):
        if (len(prices) == 0):
            return 0
        profit = 0
        lowest = prices[0]
        for current in prices[1:]:              
            if ((current - lowest) > profit):
                profit = current - lowest
            if (lowest > current):
                lowest = current
        return profit

    # brute force solution
    # Time Complexity: O(n^2)
    # Space Complexity: O(1)
    def maxProfit1(self, prices):
        profit = 0
        for index, buy in enumerate(prices):
            for sell in prices[index:]:
                if ((sell - buy) > profit):
                    profit = sell - buy
        return profit

test = Solution()
test.maxProfit([7,1,5,3,6,4])
test.maxProfit([2, 1000, 1, 5, 99, 2000])
test.maxProfit([7,6,4,3,1])
test.maxProfit([1,3,5,6,10])
