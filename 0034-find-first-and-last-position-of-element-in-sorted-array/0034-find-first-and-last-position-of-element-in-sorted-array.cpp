class Solution {
public:
    int solve2(int n, vector<int>&nums, int target){
        int right=n-1;
        int left=0;
        int last=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                last=mid;
                left=mid+1;
            }else if(nums[mid]<target)left=mid+1;
            else right=mid-1;
        }
        return last;
    }
    int solve1(int n, vector<int>&nums, int target){
        int right=n-1;
        int left=0;
        int first=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                first=mid;
                right=mid-1;
            }else if(nums[mid]<target)left=mid+1;
            else right=mid-1;
        }
        return first;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int left=solve1(n, nums, target);
        int right=solve2(n, nums, target);
        return {left, right};
    }
};