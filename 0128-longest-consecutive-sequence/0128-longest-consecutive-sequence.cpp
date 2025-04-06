class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int maxi=1;
        int count=1;
        int n=nums.size();
        if(n==1){return 1;}
        if(n==0){return 0;}
        for(int i=0; i<n-1; i++){
            if(nums[i+1]-nums[i]==1){
                count++;
                maxi=max(maxi, count);
            }else if(nums[i+1]==nums[i]){continue;}
            else{
                count=1;
            }
        }
        return maxi;
    }
};