class Solution {
public:
    void solve(int i, vector<vector<int>>&ans, vector<int>&combo, vector<int>& candidates, int target, int n){
        if(target==0){
            ans.push_back(combo);
            return;
        }
        if(target<0)return;
        for(int start=i; start<n; start++){
            if(start>i && candidates[start]==candidates[start-1])continue;
            combo.push_back(candidates[start]);
            solve(start+1, ans, combo, candidates, target-candidates[start], n);
            combo.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>combo;
        solve(0, ans, combo, candidates, target, n);
        return ans;
    }
};