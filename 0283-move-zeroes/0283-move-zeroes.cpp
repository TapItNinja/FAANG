class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=0, i=0;
        while(i<n && j<n){
            if(nums[i]!=0){
                swap(nums[i], nums[j]);
                j++;
                i++;
            }else i++;
        }
    }
};