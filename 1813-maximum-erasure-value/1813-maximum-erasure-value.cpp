class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0, right = 0;
        int n = nums.size();
        set<int> window;
        int sum = 0, maxSum = 0;

        while (right < n) {
            while (window.count(nums[right])) {
                window.erase(nums[left]);
                sum -= nums[left];
                left++;
            }
            window.insert(nums[right]);
            sum += nums[right];
            maxSum = max(maxSum, sum);
            right++;
        }
        return maxSum;
    }
};
