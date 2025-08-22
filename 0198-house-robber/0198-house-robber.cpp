class Solution {
public:
    int solve(int idx, vector<int>&nums, int n, vector<int>&dp){
        if(idx>n)return 0;
        if(idx==n)return nums[idx];
        if(dp[idx]!=-1)return dp[idx];
        int take=nums[idx]+solve(idx+2, nums, n, dp);
        int nottake=0+solve(idx+1, nums, n, dp);
        return dp[idx]=max(take, nottake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1, -1);
        return solve(0, nums, n-1, dp);
    }
};