class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>mpp;
        for(int num: nums){
            if(mpp.count(num)){
                return true;
            }else{
                mpp.insert(num);
            }
        }
        return false;
    }
};