class Solution {
public:
    void solve(int open, int close, vector<string>&ans, string mid){
        if(open==0 && close==0){
            ans.push_back(mid);
            return;
        }
        if(open>0){
            solve(open-1, close, ans, mid+'(');
        }
        if(close>open){
            solve(open, close-1, ans, mid+')');
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string mid="";
        solve(n,n, ans, mid);
        return ans;
    }
};