class Solution {
public:
    bool reorderedPowerOf2(int n) {
        if ((n & (n - 1)) == 0) return true; // already a power of two

        string s = to_string(n);
        sort(s.begin(), s.end()); // start from smallest permutation

        do {
            if (s[0] == '0') continue; // skip leading zeros
            int num = stoi(s);
            if ((num & (num - 1)) == 0) return true; // check power of two
        } while (next_permutation(s.begin(), s.end()));

        return false;
    }
};
