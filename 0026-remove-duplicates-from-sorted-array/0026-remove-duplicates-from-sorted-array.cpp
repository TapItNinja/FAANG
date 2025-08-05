class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int i=0, j=0;
        int count=1;
        while(i<n && j<n){
            if(nums[i]==nums[j])j++;
            else{
                i++;
                swap(nums[i], nums[j]);
                j++;
                count++;
            }
        }
        return count;

    }
};