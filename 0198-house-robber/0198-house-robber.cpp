class Solution {
public:
    int solve(int start, vector<int>&nums, vector<int>&dp){
        if(start==0)return nums[start];
        if(start<0)return 0;
        if(dp[start]!=-1){ return dp[start];}
        int pick=nums[start]+solve(start-2, nums, dp);
        int notpick=0+solve(start-1, nums, dp);
        return dp[start]=max(pick, notpick);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        vector<int>dp(n, -1);
        return solve(n-1, nums, dp);
    }
};