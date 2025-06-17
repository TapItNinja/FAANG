class Solution {
public:
    const int MOD = 1e9 + 7;

    // \U0001f501 Fast Exponentiation (Binary Expo)
    long long findPower(long long a, long long b) {
        long long ans = 1;
        a %= MOD;
        while (b > 0) {
            if (b % 2 == 1) {
                ans = (ans * a) % MOD;
                b--;
            } else {
                a = (a * a) % MOD;
                b /= 2;
            }
        }
        return ans;
    }

    // \U0001f9ee Modular nCr using precomputed factorials and Fermat Inverse
    long long nCr(int n, int r, const vector<long long>& factorial, const vector<long long>& fermatFac) {
        if (r < 0 || r > n) return 0;
        return (((factorial[n] * fermatFac[r]) % MOD) * fermatFac[n - r]) % MOD;
    }

    int countGoodArrays(int n, int m, int k) {
        // Precompute factorials up to n
        vector<long long> factorial(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            factorial[i] = (factorial[i - 1] * i) % MOD;
        }

        // Precompute Fermat inverses
        vector<long long> fermatFac(n + 1, 1);
        for (int i = 0; i <= n; i++) {
            fermatFac[i] = findPower(factorial[i], MOD - 2);
        }

        // n-1 C k
        long long result = nCr(n - 1, k, factorial, fermatFac);

        // Multiply with m and (m - 1)^(n - k - 1)
        result = (result * m) % MOD;
        result = (result * findPower(m - 1, n - k - 1)) % MOD;

        return result;
    }
};