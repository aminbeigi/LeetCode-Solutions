class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        highest_candies = max(candies)
        return [True if kid + extraCandies >= highest_candies else False for kid in candies]
    
    def kidsWithCandies2(self, candies: List[int], extraCandies: int) -> List[bool]:
        return [True if kid + extraCandies >= max(candies) else False for kid in candies]
    
    def kidsWithCandies3(self, candies: List[int], extraCandies: int) -> List[bool]:
        highest_candies = max(candies)
        output = []
        for kid in candies:
            if kid + extraCandies >= highest_candies:
                output.append(True)
            else:
                output.append(False)
        return output
