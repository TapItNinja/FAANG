class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int sum=0;
        for(int i=0; i<n; i++){
            if(i==n-1)sum=abs(nums[i]-nums[0]);
            else sum=abs(nums[i]-nums[i+1]);
            maxi=max(maxi, sum);
        }
        return maxi;
    }
};