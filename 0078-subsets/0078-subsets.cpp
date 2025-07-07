class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int power=1<<n;
        vector<vector<int>>ans;
        for(int i=0; i<power; i++){
            vector<int>push;
            for(int j=0; j<n; j++){
                if(((1<<j) & i)){
                    push.push_back(nums[j]);
                }
            }
            ans.push_back(push);
        }
        return ans;
    }
};