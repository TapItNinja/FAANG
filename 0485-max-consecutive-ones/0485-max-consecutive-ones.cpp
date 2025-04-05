class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int i=0, j=0;
        int maxi=0;
        int count=0;
        while(i<nums.size()){
            if(nums[i]==1){
                count++;
                i++;
                maxi=max(maxi, count);
            }else {count=0; i++;}
        }
        return maxi;
    }
};