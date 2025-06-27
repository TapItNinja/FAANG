class Solution {
    string s;
    int k;
    string res;
    vector<int> freq;

    bool canRepeat(const string& sub) {
        int count = 0, idx = 0;
        for (char c : s) {
            if (c == sub[idx]) {
                idx++;
                if (idx == (int)sub.size()) {
                    count++;
                    idx = 0;
                    if (count == k) return true;
                }
            }
        }
        return false;
    }

    bool dfs(int len, string& cur, vector<int>& freq) {
        if ((int)cur.size() == len) {
            if (canRepeat(cur)) {
                if ((int)cur.size() > (int)res.size() || (cur.size() == res.size() && cur > res))
                    res = cur;
                return true;
            }
            return false;
        }
        bool found = false;
        for (char c = 'z'; c >= 'a'; c--) {
            if (freq[c - 'a'] >= k) {
                freq[c - 'a'] -= k;
                cur.push_back(c);
                if (dfs(len, cur, freq))
                    found = true;
                cur.pop_back();
                freq[c - 'a'] += k;
            }
        }
        return found;
    }

public:
    string longestSubsequenceRepeatedK(string _s, int _k) {
        s = _s; k = _k;
        freq.assign(26, 0);
        for (char c : s) freq[c - 'a']++;

        int left = 1, right = (int)s.size() / k;
        res = "";

        while (left <= right) {
            int mid = (left + right) / 2;
            string cur = "";
            vector<int> tmpFreq = freq;
            if (dfs(mid, cur, tmpFreq)) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return res;
    }
};