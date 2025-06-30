class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int l=0;
        int r=0;
        int res=0;
        while(r<n){
            while(nums[r]-nums[l]>1)l++;
            if(nums[r]-nums[l]==1)res=max(res, r-l+1);
            r++;
        }
        return res;
    }
};