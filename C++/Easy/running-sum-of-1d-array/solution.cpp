class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i-1];
        }
        return nums;
    }
    
    vector<int> runningSum2(vector<int>& nums) {
        int sum = 0;
        for (auto& i: nums) {
            sum += i;
            i = sum;
        }
        return nums;
    }
};