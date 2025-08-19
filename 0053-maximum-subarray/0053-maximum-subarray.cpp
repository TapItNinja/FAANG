class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int r=0;
        int sum=INT_MIN;
        int n=nums.size();
        int maxsum=INT_MIN;
        while(r<n){
            sum+=nums[r];
            maxsum=max(maxsum, sum);
            if(sum<0){
                sum=0;
            }
            r++;
        }
        return maxsum;
    }
};