class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int curr=nums[0];
        int count=1;
        for(int i=1; i<n; i++){
            if(curr==nums[i]){
                count++;
            }else{
                count--;
                if(count<=0){
                    curr=nums[i];
                    count=1;
                }
            }
        }
        return curr;
    }
};