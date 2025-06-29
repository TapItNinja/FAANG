class Solution {
public:
    int numSubseq(vector<int>& a, int target) {
        const int MOD = 1e9 + 7;
        int n = a.size(), ans = 0;
        sort(a.begin(), a.end());

        // ⚡ Precompute 2^i % MOD
        vector<int> pow2(n, 1);
        for (int i = 1; i < n; ++i)
            pow2[i] = (pow2[i - 1] * 2LL) % MOD;

        int l = 0, r = n - 1;
        while (l <= r) {
            if (a[l] + a[r] <= target) {
                ans = (ans + pow2[r - l]) % MOD;
                ++l;
            } else {
                --r;
            }
        }

        return ans;
    }
};