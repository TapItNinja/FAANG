class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int twice=0;
        for(int i=0; i<n; i++){
            twice^=nums[i];
        }
        return twice;
    }
};