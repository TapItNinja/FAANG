class Solution {
public:
    int maximumGain(string s, int x, int y) {
        if (x > y)
            return removePattern(s, 'a', 'b', x) + removePattern(s, 'b', 'a', y);
        else
            return removePattern(s, 'b', 'a', y) + removePattern(s, 'a', 'b', x);
    }

private:
    int removePattern(const string& s, char first, char second, int value) {
        stack<char> st;
        string remaining;
        int score = 0;

        for (char c : s) {
            if (!st.empty() && st.top() == first && c == second) {
                st.pop();
                score += value;
            } else {
                st.push(c);
            }
        }

        // Extract remaining characters into a string
        while (!st.empty()) {
            remaining.push_back(st.top());
            st.pop();
        }
        reverse(remaining.begin(), remaining.end());

        // Important: Update `s` only here — outside recursion
        const_cast<string&>(s) = remaining; // C++ hack to modify const ref

        return score;
    }
};
