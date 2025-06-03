class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return 1;

        int j=0;
        int count=0;
        for(int i=1; i<n; i++){
            if(nums[j]==nums[i]){
                continue;
            }else{
                j++;
                swap(nums[j], nums[i]);
                continue;
            }
        }
        j++;
        return j;
        
    }
};