class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int, int>mpp;
        for(int i=0; i<n; i++){
            int complement=target-nums[i];
            if(mpp.find(complement)!=mpp.end()){
                return {i, mpp[complement]};
            }else{
                mpp[nums[i]]=i;
            }
        }
        return {-1, -1};
    }
};