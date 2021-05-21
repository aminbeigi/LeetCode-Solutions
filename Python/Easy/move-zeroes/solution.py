class Solution:
    # time complexity O(n)
    # space complexity O(1)
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        pos = 0
        for idx, num in enumerate(nums):
            if num != 0:
                nums[idx], nums[pos] = nums[pos], nums[idx]
                pos += 1
    
    # time complexity O(n^2)
    # space complexity O(1)
    def moveZeroes2(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        end = len(nums)
        i = 0
        while i < end:
            if nums[i] == 0:
                del nums[i]
                nums.append(0)
                end -= 1
            else:
                i += 1
           
