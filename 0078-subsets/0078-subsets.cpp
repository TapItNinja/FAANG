class Solution {
public:
        //POWER SET
    // vector<vector<int>> subsets(vector<int>& nums) {
    //     int n=nums.size();
    //     int sub=1<<n;
    //     vector<vector<int>> ans;
    //     for(int i=0; i<sub; i++){
    //         vector<int>subs;
    //         for(int j=0; j<n; j++){
    //             if(i & (1<<j)){
    //                 subs.push_back(nums[j]);
    //             }
    //         }
    //         ans.push_back(subs);
    //     }
    //     return ans;
    // }

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