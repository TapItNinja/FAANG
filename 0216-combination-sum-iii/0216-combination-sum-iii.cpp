class Solution {
public:
    void solve(int start, vector<vector<int>> &ans, vector<int>&combo, int k, int target, vector<int>&nums, int no){
        if(target==0 && combo.size()==k){
            ans.push_back(combo);
            return;
        }
        if(target<0)return;
        for(int i=start; i<no; i++){
            combo.push_back(nums[i]);
            solve(i+1, ans, combo, k, target-nums[i], nums, no);
            combo.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums={1, 2, 3, 4, 5, 6, 7, 8, 9};
        int no=nums.size();
        int target=n;
        vector<vector<int>>ans;
        vector<int>combo;
        solve(0, ans, combo, k, target, nums, no);
        return ans;
    }
};