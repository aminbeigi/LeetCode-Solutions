class Solution:
    # HashMap solution
    # time complexity: O(n)
    # space complexity: O(n)
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        my_dict = {}
        for i, number in enumerate(nums):
            complement = target - number            
            if (complement in my_dict):
                return [my_dict[complement], i]            
            my_dict[number] = i 
