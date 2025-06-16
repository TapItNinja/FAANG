class Solution {
public:
    int ans(int ind, vector<int>& nums, int sum, int target) {
        if (ind < 0) {
            return sum == target ? 1 : 0;
        }

        int add = ans(ind - 1, nums, sum + nums[ind], target);
        int sub = ans(ind - 1, nums, sum - nums[ind], target);

        return add + sub;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return ans(n - 1, nums, 0, target);
    }
};