class Solution {
public:
    void backtrack(int start, vector<int>&candidates, int target, vector<vector<int>>&results, vector<int>combo){
        if(target==0){
            results.push_back(combo);
            return;
        }
        for(int i=start; i<candidates.size(); i++){
            if(candidates[i]<=target){
                combo.push_back(candidates[i]);
                backtrack(i, candidates, target-candidates[i], results, combo);
                combo.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>results;
        vector<int>combo;
        backtrack(0, candidates, target, results, combo);
        return results;
    }
};