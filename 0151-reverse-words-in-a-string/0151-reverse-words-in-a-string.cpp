class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word = "", ans = "";
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                st.push(word);
                word = "";
            }
        }

        // Push the last word if it exists
        if (!word.empty()) st.push(word);

        // Build the result string
        while (!st.empty()) {
            ans += st.top();
            st.pop();
            if (!st.empty()) ans += " ";  // add space only if not the last word
        }

        return ans;
    }
};
