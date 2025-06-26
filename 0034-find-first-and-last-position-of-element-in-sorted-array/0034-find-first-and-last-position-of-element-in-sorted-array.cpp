class Solution {
public:
    int solve1(int n, vector<int>& nums, int target){
        int left=0;
        int right=n-1;
        int point=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){point=mid;left=mid+1; }
            else if(nums[mid]<target)left=mid+1;
            else right=mid-1;
        }
        return point;
    }
    int solve2(int n, vector<int>& nums, int target){
        int left=0;
        int right=n-1;
        int point=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){point=mid;right=mid-1; }
            else if(nums[mid]<target)left=mid+1;
            else right=mid-1;
        }
        return point;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int right=solve1(n, nums, target);
        int left=solve2(n, nums, target);
        return {left ,right};
    }
};