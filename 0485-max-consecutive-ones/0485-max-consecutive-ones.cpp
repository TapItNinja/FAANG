class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int l=0, r=0;
        int count=0;
        int maxcount=0;
        while(r<n){
            if(nums[r]==1){
                count=r-l+1;
                r++;
            }else{
                r++;
                l=r;
                count=0;
            }
            maxcount=max(maxcount, count);
        }
        return maxcount;
    }
};