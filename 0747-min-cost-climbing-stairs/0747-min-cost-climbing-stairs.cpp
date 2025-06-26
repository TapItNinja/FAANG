class Solution {
public:
    int solve(int n, vector<int>& cost, vector<int>& dp) {
        if (n < 0) return 0;             // base case: no cost to climb before step 0
        if (n == 0 || n == 1) return cost[n]; // base case: cost to step 0 or 1 directly
        if (dp[n] != -1) return dp[n];   // return memoized result

        // Recursive call for previous 1 and 2 steps
        return dp[n] = cost[n] + min(solve(n - 1, cost, dp), solve(n - 2, cost, dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, -1);

        // You can start from step 0 or step 1, so take the min of both
        return min(solve(n - 1, cost, dp), solve(n - 2, cost, dp));
    }
};
