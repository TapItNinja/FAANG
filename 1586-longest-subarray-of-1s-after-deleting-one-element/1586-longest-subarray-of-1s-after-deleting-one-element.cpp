class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=0;
        int count=0;
        int maxcount=0;
        int zero=0;
        while(r<n){
            if(nums[r]==1){
                count++;
            }
            if(nums[r]==0){
                zero++;
            }
            while(zero>1){
                if(nums[l]==0){
                    zero--;
                    
                }
                l++;
            }
            maxcount=max(r-l, maxcount);
            r++;

        }
        return maxcount;
    }
};