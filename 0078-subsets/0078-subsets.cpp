class Solution {
public:
    void solve(int idx, int n, vector<vector<int>>&ans, vector<int>&mid, vector<int>& nums){
        if(idx==n){
            ans.push_back(mid);
            return;
        }
        mid.push_back(nums[idx]);
        solve(idx+1, n, ans, mid, nums);
        mid.pop_back();
        solve(idx+1, n, ans, mid, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>mid;
        solve(0, n, ans, mid, nums);
        return ans;
    }
};