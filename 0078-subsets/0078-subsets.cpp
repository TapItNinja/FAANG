class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int sub=1<<n;
        vector<vector<int>>ans;
        for(int i=0; i<sub; i++){
            vector<int>mid;
            for(int j=0; j<n; j++){
                if(i&(1<<j)){
                    mid.push_back(nums[j]);
                }
            }
            ans.push_back(mid);
        }
        return ans;
    }
};