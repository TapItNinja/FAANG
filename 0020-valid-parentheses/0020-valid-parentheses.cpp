class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) return false;  // ✅ check before st.top()

                if ((c == ')' && st.top() == '(') ||
                    (c == '}' && st.top() == '{') ||
                    (c == ']' && st.top() == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty(); // ✅ must be empty if valid
    }
};
