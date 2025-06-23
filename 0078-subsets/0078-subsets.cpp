class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int subs=1<<n;
        vector<vector<int>>ans;
        for(int i=0; i<=subs-1; i++){
            vector<int>combo;
            for(int j=0; j<=n-1; j++){
                if(i & (1<<j))combo.push_back(nums[j]);
            }
            ans.push_back(combo);
        }
        return ans;
    }
};