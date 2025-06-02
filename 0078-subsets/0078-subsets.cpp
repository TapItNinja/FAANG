class Solution {
public:
    void solve(int idx,vector<int>emp,  vector<int>sub, vector<vector<int>>&ans, int n){
        if(idx>=n){
            ans.push_back(emp);
            return;
        }
        emp.push_back(sub[idx]);
        solve(idx+1,emp, sub, ans, n);

        emp.pop_back();
        solve(idx+1,emp, sub, ans, n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>emp;
        solve(0,emp, nums, ans, n);
        return ans;
    }
};