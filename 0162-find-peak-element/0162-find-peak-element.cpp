class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid + 1]) {
                // peak is on the left side (including mid)
                high = mid;
            } else {
                // peak is on the right side
                low = mid + 1;
            }
        }
        return low; // or high, since low == high
    }
};
