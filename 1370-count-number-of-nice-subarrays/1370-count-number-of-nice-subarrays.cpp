class Solution {
public:
    bool odd1(int n){
        if(n%2==0)return false;
        return true;
    }
    int solve(vector<int>&nums, int goal){
        int r=0, l=0, count=0, odd=0, numof=0;
        while(r<nums.size()){
            if(odd1(nums[r]))count++;
            while(count>goal){
                if(odd1(nums[l]))count--;
                l++;
            }
            numof=numof+(r-l+1);
            r++;
        }
        return numof;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums, k)-solve(nums, k-1);
    }
};