class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int maxi1=nums[0];
        int n=nums.size();
        for(int i=1; i<n; i++){
            maxi=max(nums[i], maxi+nums[i]);
            maxi1=max(maxi, maxi1);
        }
        return maxi1;
    }
};