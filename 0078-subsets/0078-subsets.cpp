class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int sub=1<<n;
        vector<vector<int>>final;
        for(int i=0; i<=sub-1; i++){
            vector<int>ans;
            for(int j=0; j<=n-1; j++){
                if(i & (1<<j)){
                    ans.push_back(nums[j]);
                }
        }
        final.push_back(ans);
        }
        return final;
    }
};