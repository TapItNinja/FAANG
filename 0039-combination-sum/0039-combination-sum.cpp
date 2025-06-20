class Solution {
public:
    void solve(int i, vector<vector<int>>&ans, vector<int>&combination, int n,int target, vector<int>&candidates){
        if(target==0){
            ans.push_back(combination);
            return;
        }
        if (target < 0) return;
        for(int start=i; start<n; start++){
            combination.push_back(candidates[start]);
            solve(start, ans, combination, n, target-candidates[start], candidates);
            combination.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // sort(candidates.begin(), candidates.end());
        int n=candidates.size();
        vector<vector<int>>ans;
        vector<int>combination;
        solve(0, ans, combination, n, target, candidates);
        return ans;
    }
};