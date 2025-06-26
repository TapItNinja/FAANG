class Solution {
public:
    int longestSubsequence(string s, int k) {
        int count = 0;
        int ones = 0;
        int n = s.size();
        long long val = 0;
        long long base = 1;

        // Count all '0's — we can always take them
        for (char c : s) {
            if (c == '0') count++;
        }

        // Traverse from end to start (least significant to most)
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '1') {
                if (base <= k - val) {
                    val += base;
                    count++;
                }
                base <<= 1; // Multiply base by 2
                if (base > k) break; // No point checking beyond this
            } else {
                base <<= 1;
                if (base > k) break;
            }
        }

        return count;
    }
};
