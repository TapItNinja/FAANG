class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        while(left<=right){
            int mid=right-(right-left)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target)left=mid+1;
            else right=mid-1;
        }
        return left;
    }
};