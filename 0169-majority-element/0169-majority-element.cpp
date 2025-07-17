class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1;
        int n=nums.size();
        int number=nums[0];
        for(int i=1; i<n; i++){
            if(number==nums[i])count++;
            else count--;
            if (count == 0) number = nums[i], count = 1;
        }
        return number;
    }
};