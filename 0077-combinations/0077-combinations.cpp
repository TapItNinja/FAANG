class Solution {
public:
    void solve(int idx, int n, int k,  vector<vector<int>>&ans, vector<int>combo){
        if(k==0){
            ans.push_back(combo);
            return;
        }
        for(int i=idx; i<=n; i++){
            combo.push_back(i);
            solve(i+1, n, k-1, ans, combo);
            combo.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>combo;
        solve(1, n, k, ans, combo);
        return ans;
    }
};