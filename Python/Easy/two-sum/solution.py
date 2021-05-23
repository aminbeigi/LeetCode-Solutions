class Solution:
    # dictionary solution
    # time complexity: O(n)
    # space complexity: O(n)
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for idx, num in enumerate(nums):
            solution = target-num
            if solution in d:
                return [d[solution] ,idx]
            d[num] = idx 
        
