class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int maxi = 1;
        int count = 1;
        int n = nums.size();

        for(int i = 1; i < n; i++) {
            if(nums[i] == nums[i - 1]) continue; // Skip duplicates

            if(nums[i] == nums[i - 1] + 1) {
                count++;
            } else {
                count = 1; // Reset count
            }

            maxi = max(maxi, count);
        }

        return maxi;
    }
};
