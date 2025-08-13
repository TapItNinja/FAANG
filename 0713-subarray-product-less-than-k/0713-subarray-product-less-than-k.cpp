class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int r=0, l=0;
        int maxf=0;
        int product=1;
        if(k<=1)return 0;
        while(r<n){
            product*=nums[r];
            while(product>=k) product/=nums[l++];
                maxf+=(r-l+1);
                r++;
        }
        return maxf;
    }
};