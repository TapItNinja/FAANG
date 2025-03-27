class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, bool>mpp;
        int idx=0;
        for(int i=0; i<nums.size(); i++){
            if(mpp.find(nums[i])==mpp.end()){
                mpp[nums[i]]=true;
                nums[idx++]=nums[i];
            }

        }
        return idx;
    }
};