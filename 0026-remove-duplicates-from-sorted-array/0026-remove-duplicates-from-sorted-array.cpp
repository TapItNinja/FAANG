class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int l = 0; // pointer to last unique element
        for (int r = 1; r < n; r++) {
            if (nums[r] != nums[l]) {
                l++;
                nums[l] = nums[r]; // place next unique element
            }
        }
        return l + 1; // length of unique elements
    }
};
