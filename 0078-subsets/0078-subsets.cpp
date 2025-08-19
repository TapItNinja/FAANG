class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        // vector<int>temp;
        int pow=1<<n;
        for(int i=0; i<=pow-1; i++){
            vector<int>temp;
            for(int j=0; j<=n-1; j++){
                if(i & (1<<j))temp.push_back(nums[j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};