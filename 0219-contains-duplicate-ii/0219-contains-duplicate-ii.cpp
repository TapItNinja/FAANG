class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> indexMap;  // num -> last seen index
        for (int i = 0; i < nums.size(); i++) {
            if (indexMap.find(nums[i]) != indexMap.end() && i - indexMap[nums[i]] <= k) {
                return true;
            }
            indexMap[nums[i]] = i;  // update last seen index
        }
        return false;
    }
};
