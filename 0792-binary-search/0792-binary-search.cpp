class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int right=n-1;
        int left=0;
        while(left<=right){
            int mid=right-(right-left)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target)left=mid+1;
            else right=mid-1;
        }
        return -1;
    }
};