class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int, int> mpp;
        for(int i=0; i<n; i++){
            int complement=target-nums[i];
            if(mpp.find(complement)!=mpp.end()){
                return {i, mpp[complement]};
            }
            mpp[nums[i]]=i;
        }
        return {0, 0};
    }
};