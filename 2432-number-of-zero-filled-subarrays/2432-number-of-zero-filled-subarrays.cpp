class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int r=0, l=0;
        int n=nums.size();
        long long count=0;
        while(r<n){
            if(nums[r]==0){
                count+=r-l+1;
                r++;
            }else {
                r++;
                l=r;
            }
        }
        return count;
    }
};