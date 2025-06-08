class Solution {
public:
    int solve(vector<int>& nums, int target, vector<int>& dp) {
        // Base case
        if (target == 0) return 1;
        if (target < 0) return 0;

        // Return cached result if already computed
        if (dp[target] != -1) return dp[target];

        int count = 0;
        for (int num : nums) {
            count += solve(nums, target - num, dp); // Try each number
        }

        dp[target] = count; // Cache the result
        return count;
    }

    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target + 1, -1); // Initialize DP with -1 (not computed)
        return solve(nums, target, dp);
    }
};
