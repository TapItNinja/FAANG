class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int i=0;
        int total=0;
        while(i<3){
            int count=mpp[i];
            for(int j=0; j<count; j++){
                nums[total++]=i;
            }
            i++;
        }
    }
};