class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique=0;
        for(auto& num: nums){
            unique=unique^num;
        }
        return unique;
    }
};