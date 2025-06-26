class Solution {
public:
    int solve(int n, vector<int>& dp) {
        if (n < 0) return 0;         // No way to reach negative step
        if (n == 0) return 1;        // One way to stand at step 0 (base case)

        if (dp[n] != -1) return dp[n];   // Return already computed value

        // Store the result of subproblems
        return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);   // Initialize memo table with -1
        return solve(n, dp);
    }
};
