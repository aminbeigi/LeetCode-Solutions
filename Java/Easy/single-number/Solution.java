class Solution {
	// time complexity: O(n)
	// space complexity: O(n)
    public int singleNumber(int[] nums) {
        HashSet<Integer> set = new HashSet<>();
        for (int i = 0; i < nums.length; ++i) {
            if (set.contains(nums[i])) {
                set.remove(nums[i]);
                continue;                
            }
            set.add(nums[i]);
        }
        return set.iterator().next();
    }
}
 