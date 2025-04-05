class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int number=nums[0];
        int n=nums.size();
        int count=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==number){
                count++;
            }
            else{
                count--;
                if(count==0){
                number=nums[i];
                count=1;
            }}
            
        }
        return number;
    }
};