class Solution {
public:
    void solve(int idx, int n, string &digits, unordered_map<char, string>&dt, string mid, vector<string>&ans){
        if(idx==n){
            ans.push_back(mid);
            return;
        }
        char digit=digits[idx];
        for(auto& ch: dt[digit]){
            mid+=ch;
            solve(idx+1, n, digits, dt, mid, ans);
            mid.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        if(n==0)return {};
        vector<string>ans;
        unordered_map<char, string>dt={
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string mid="";
        solve(0, n, digits, dt, mid, ans);
        return ans;

    }
};