class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int r=0, l=0;
        int n=nums.size();
        while(r<n){
            if(nums[l]==0 && nums[r]==0)r++;
            else if(nums[l]==0 && nums[r]!=0)swap(nums[l], nums[r]);
            else{
                l++;
                r++;
            }
        }
    }
};