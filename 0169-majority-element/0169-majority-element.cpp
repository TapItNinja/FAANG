class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int major=nums[0];
        int count=0;
        for(int i=0; i<n; i++){
            if(major==nums[i]){
                count++;
            }else{
                count--;
                if(count<0){
                    major=nums[i];
                    count=1;
                }
            }
        }
        return major;
    }
};