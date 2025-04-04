class Solution {
public:
    int min(vector<int>nums){
        int n=nums.size();
        for(int i=1; i<n; i++){
            if(nums[i-1]>nums[i]){
                return i;
            }
        }
        return 0;
    }
    bool check(vector<int>& nums) {
        int min1=min(nums);
        int n=nums.size();
        for(int i=1; i<nums.size(); i++){
            int prev=nums[(min1+i-1)%n];
            int curr=nums[(min1+i)%n];
            if(prev>curr)return false;
        }
        return true;
    }
};