class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> output;
        for (int x = 0, y = nums.size()/2;  x < nums.size()/2; ++x, ++y) {
            output.push_back(nums[x]);
            output.push_back(nums[y]);
        }
        return output;
    }
};