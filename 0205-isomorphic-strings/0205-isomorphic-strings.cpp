class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> mapS;
        unordered_map<char, bool> usedT;

        for (int i = 0; i < s.size(); i++) {
            char c1 = s[i], c2 = t[i];

            if (mapS.count(c1)) {
                if (mapS[c1] != c2) return false;
            } else {
                if (usedT[c2]) return false;
                mapS[c1] = c2;
                usedT[c2] = true;
            }
        }

        return true;
    }
};
