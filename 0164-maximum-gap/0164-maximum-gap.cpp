class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi=INT_MIN;
        int n=nums.size();
        if(n==1)return 0;
        for(int i=1 ;i<n; i++){
            int diff=nums[i]-nums[i-1];
            maxi=max(diff, maxi);
        }
        return maxi;
    }
};