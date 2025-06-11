class Solution {
public:
    void solve(int i, unordered_map<char, string> &dt, string digits, vector<string>&ans, int n, string &mid){
        if(i==n){
            ans.push_back(mid);
            return;
        }
        char digit=digits[i];
        for(auto& ch: dt[digit]){
            mid.push_back(ch);
            solve(i+1, dt, digits, ans, n, mid);
            mid.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        int n=digits.size();
        if(n==0)return {};
        unordered_map<char, string> dt = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}
    };
    vector<string>ans;
    string mid="";
    solve(0, dt, digits, ans, n, mid);
    return ans;

    }
};