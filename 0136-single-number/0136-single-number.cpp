class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int finalnum=nums[0];
        for(int i=1; i<n; i++){
            finalnum=finalnum^nums[i];
        }
        return finalnum;
    }
};