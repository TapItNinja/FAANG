class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool>mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(mpp.find(nums[i])==mpp.end()){
                mpp[nums[i]]=true;
            }else{return true;}
        }
        return false;
    }
};