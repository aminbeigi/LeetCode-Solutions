class Solution {
    // bitwise operator XOR solution
    // time complexity: O(n)
    // space complexity: O(1)
	hey
	public int singleNumber(int[] nums) {
        int n = 0;
        for (int i : nums) {
            n = n ^ i;
        }
        return n;
    }
	
    // HashSet solution
    // time complexity: O(n)
    // space complexity: O(n)	
    public int singleNumber2(int[] nums) {
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
