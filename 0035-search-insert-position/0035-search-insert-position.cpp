class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0, j=nums.size()-1;
        while(i<=j){
            // int mid=(i+j)/2; to prevent int overflow
            int mid=i+(j-i)/2;
            if(nums[mid]==target){return mid;}
            else if(nums[mid]>target){
                j=mid-1;
            }
            else if(nums[mid]<target){
                i=mid+1;
            }
        }
        return i;
    }
};