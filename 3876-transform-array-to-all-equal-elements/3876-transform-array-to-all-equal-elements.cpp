class Solution {
private:
    // make all elements 1
    bool allone(vector<int> nums, int k, int n) {
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == -1) {
                nums[i] = 1;
                nums[i + 1] *= -1;
                count++;
            }
        }
        return count <= k && nums[n - 1] == 1;
    }

    // make all elements -1
    bool allzero(vector<int> nums, int k, int n) {
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == 1) {
                nums[i] = -1;
                nums[i + 1] *= -1;
                count++;
            }
        }
        return count <= k && nums[n - 1] == -1;
    }

public:
    bool canMakeEqual(vector<int>& nums, int k) {
        int n = nums.size();
        // all 1s
        if (allone(nums, k, n))
            return true;
        // all -1s
        return allzero(nums, k, n);
    }
};