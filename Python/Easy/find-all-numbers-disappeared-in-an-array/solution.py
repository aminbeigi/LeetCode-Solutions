class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        # time complexity: O(n)
        # space complexity: O(1)
        for num in nums:
            index = abs(num) - 1
            nums[index] = -abs(nums[index])
            
        return [i + 1 for i, num in enumerate(nums) if num > 0]    

    def findDisappearedNumbers2(self, nums: List[int]) -> List[int]:
        # time complexity: O(n)
        # space complexity: O(n)
        d = {i:0 for i in range(1, len(nums)+1)}
        
        for num in nums:
            d[num] += 1
        
        return [k for k, v in d.items() if v == 0]
