class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        while(i<n && nums[i]>=nums[i-1]){
            i++;
        }
        if(i==n)return true;
        int j=i+1;
        while(j<n && nums[j]>=nums[j-1]){
            j++;
        }
        if(j!=n)return false;
        return nums[n-1]<=nums[0];
    }
};