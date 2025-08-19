class Solution {
public:
    bool odd(int n){
        if(n%2!=0)return true;
        return false;
    }
    int solve(vector<int>&nums, int k){
        int r=0, l=0;
        int combo=0;
        int n=nums.size();
        int count=0;
        while(r<n){
            if(odd(nums[r])){
                count++;
            }
            while(count>k){
                if(odd(nums[l]))count--;
                l++;
            }
            combo+=(r-l+1);
            r++;
        }
        return combo;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return solve(nums, k)-solve(nums, k-1);
    }
};