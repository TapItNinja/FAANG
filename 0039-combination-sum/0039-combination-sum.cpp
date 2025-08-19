class Solution {
public:
    void solve(int idx, vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>combo){
        if(target==0){
            ans.push_back(combo);
            return;
        }
        for(int i=idx; i<candidates.size(); i++){
            if(candidates[i]<=target){
                combo.push_back(candidates[i]);
                solve(i, candidates, target-candidates[i], ans, combo);
                combo.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx=candidates.size();
        vector<vector<int>>ans;
        vector<int>combo;
        solve(0, candidates, target, ans, combo);
        return ans;
    }
};